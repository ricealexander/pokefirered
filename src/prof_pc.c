#include "global.h"
#include "event_data.h"
#include "pokedex.h"
#include "field_message_box.h"

extern const u8 PokedexRating_Text_LessThan10[];
extern const u8 PokedexRating_Text_LessThan20[];
extern const u8 PokedexRating_Text_LessThan30[];
extern const u8 PokedexRating_Text_LessThan45[];
extern const u8 PokedexRating_Text_LessThan55[];
extern const u8 PokedexRating_Text_LessThan65[];
extern const u8 PokedexRating_Text_LessThan75[];
extern const u8 PokedexRating_Text_LessThan90[];
extern const u8 PokedexRating_Text_LessThan100[];
extern const u8 PokedexRating_Text_LessThan110[];
extern const u8 PokedexRating_Text_LessThan120[];
extern const u8 PokedexRating_Text_LessThan135[];
extern const u8 PokedexRating_Text_LessThan145[];
extern const u8 PokedexRating_Text_LessThan155[];
extern const u8 PokedexRating_Text_LessThan169[];
extern const u8 PokedexRating_Text_Complete[];

u16 GetPokedexCount(void)
{
    if (gSpecialVar_0x8004 == 0)
    {
        gSpecialVar_0x8005 = GetKantoPokedexCount(0);
        gSpecialVar_0x8006 = GetKantoPokedexCount(1);
    }
    else
    {
        gSpecialVar_0x8005 = GetNationalPokedexCount(0);
        gSpecialVar_0x8006 = GetNationalPokedexCount(1);
    }
    return IsNationalPokedexEnabled();
}

static const u8 *GetProfOaksRatingMessageByCount(u16 count)
{
    gSpecialVar_Result = FALSE;

    // There are 170 Pokemon in the adjusted Kanto Pokedex
    if (count < 10)  return PokedexRating_Text_LessThan10;
    if (count < 20)  return PokedexRating_Text_LessThan20;
    if (count < 30)  return PokedexRating_Text_LessThan30;
    if (count < 45)  return PokedexRating_Text_LessThan45;
    if (count < 55)  return PokedexRating_Text_LessThan55;
    if (count < 65)  return PokedexRating_Text_LessThan65;
    if (count < 75)  return PokedexRating_Text_LessThan75;
    if (count < 90)  return PokedexRating_Text_LessThan90;
    if (count < 100) return PokedexRating_Text_LessThan100;
    if (count < 110) return PokedexRating_Text_LessThan110;
    if (count < 120) return PokedexRating_Text_LessThan120;
    if (count < 135) return PokedexRating_Text_LessThan135;
    if (count < 145) return PokedexRating_Text_LessThan145;
    if (count < 155) return PokedexRating_Text_LessThan155;
    if (count < 169) return PokedexRating_Text_LessThan169;

    if (count == KANTO_DEX_COUNT - 1)
    {
        // Mew doesn't count for completing the pokedex
        if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_MEW), 1))
            return PokedexRating_Text_LessThan169;

        gSpecialVar_Result = TRUE;
        return PokedexRating_Text_Complete;
    }

    if (count == KANTO_DEX_COUNT)
    {
        gSpecialVar_Result = TRUE;
        return PokedexRating_Text_Complete;
    }

    return PokedexRating_Text_LessThan10;
}

void GetProfOaksRatingMessage(void)
{
    ShowFieldMessage(GetProfOaksRatingMessageByCount(gSpecialVar_0x8004));
}
