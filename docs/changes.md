# Complete List of Changes

### Contents
* **National Pokédex**
  * Reorder Pokédex Entries
  * Disable Evolution/Trade Restrictions
  * Enable Evolutions
<br><br>
* **Pokémon**
  * Changes in Future Generations
  * Pokémon Encounters
  * Fishing Encounters
  * Surf Encounters
  * Legendary Pokémon
  * Shiny Pokémon
  * Version Exclusives
<br><br>
* **Moves**
  * Changes in Future Generations
  * Hidden Power
  * TMs / HMs
  * Move Tutors
  * Move Relearner
  * Physical/Special Split
<br><br>
* **Battles**
  * Fairy Type
  * Gym Leaders
  * Trainer Classes
<br><br>
* **Items**
  * Changes in Future Generations
  * Gen 3 Poké Balls
  * Respawning Items
  * New Merchants
<br><br>
* **Mechanics**
  * Abilities
  * Berry Spots
  * Breeding
  * Decorations
  * Following Pokémon
  * Fly
  * Game Corner
  * PC System
  * Weather
  * Quality of Life
<br><br>
* **World-Building**
  * Cameos
  * New NPCs
  * Merchants
<br><br>
* **Visuals & Audio**
  * User Interface
  * Pokémon Sprites
  * Tileset Changes
  * GameBoy Sounds
  * Music
<br><br>
* **Options**
  * Auto-Save
<br><br>
* **Bugfixes & Optimizations**








<!--------------------------------------------------------- National Pokédex --
8b  8       w   w                  8   888b.       8             8
8Ybm8 .d88 w8ww w .d8b. 8d8b. .d88 8   8  .8 .d8b. 8.dP .d88b .d88 .d88b Yb dP
8  “8 8  8  8   8 8’ .8 8P Y8 8  8 8   8wwP’ 8’ .8 88b  8 .P’ 8  8 8 .P’  `8.
8   8 `Y888 Y8P 8 `Y8P’ 8   8 `Y88 8   8     `Y8P’ 8 Yb `Y88P `Y88 `Y88P dP Yb
------------------------------------------------------------------------------>

<br><br>
## National Pokédex
* [x] **Rearrange Pokédex entries** (Kanto Dex now has 170 Pokémon)
<br><br>
* [ ] **National Pokédex is obtained** as soon as player beats the Elite Four
<br><br>
* [x] **Improve Sort Modes**
  * [x] Use Pokédex # as secondary-sorting for Lightest, Smallest, and Type sorts
  * [x] Update to reflect changes to the Pokédex entries
<br><br>
* [ ] **Implement Pokémon sprites into the Pokédex interface** (may be too large)

### Reorder Pokédex Entries
  * [x] **Group Evolutionary Lines** (Baby Pokémon, Gen II Evolutions)
  * [x] **Place Pseudo-Legendaries before Legendaries** (Dragonite before Legendary Birds, Tyranitar before Legendary Beasts)
  * [x] **Place Mew before Mewtwo**
  * Kanto Pokédex now has 170 Pokémon

### Disable Evolution/Trade Restrictions
  * [x] Allow non-Kanto Pokémon to evolve
  * [x] Allow non-Kanto Pokémon to evolve with Trade Items
  * [x] Allow non-Kanto Pokémon to evolve with Evolution Stones
  * [ ] Allow trades of non-Kanto Pokémon
  * [ ] Allow trades of Eggs
  * [ ] Allow trades of fateful encounter Mew/Deoxys
  * [ ] Allow trades with Ruby/Sapphire/Emerald regardless of progress
  * [ ] Modify data so Emerald allows trades with FireRed/LeafGreen regardless of FRLG progress
  * [ ] Allow trades with Japanese Pokémon games (Emerald is compatible so consider borrowing code)

### Enable Evolutions
  * [ ] **Implement friendship evolution for Espeon/Umbreon**
  * Consider Sun/Moon Stones, level up while outdoors/indoors, version-exclusive evolution, PID-based evolution like Silcoon/Cascoon
  * [ ] **Implement an evolution method for Feebas**
  * Consider Level Up, Dragon Scale, Water Stone, Friendship, Sp. Attack increasing Nature?
  * [ ] **Allow Trade Evolutions to evolve by Level Up when holding its evolution item** (for example, a Scyther levelling up while holding Metal Coat)
  * [ ] **Allow Trade Evolutions a way to be traded in game**
  * Consider Bill’s PokéTransporter as a Trade system, a Link Cable hold item, or an NPC that can trade
  <br><br>
  * [ ] **Direct-Use evolution items are available**
  * Consider Hold Items, Game Corner Prizes, Celadon Mall
    * [ ] Additional **Fire Stones** are available
    * [ ] Additional **Leaf Stones** are available
    * [ ] Additional **Thunder Stones** are available
    * [ ] Additional **Water Stones** are available
    * [ ] Additional **Moon Stones** are available
    * [ ] **Sun Stones** are available
  <br><br>
  * [ ] **Trade evolution items are available**
  * Consider Hold Items, Game Corner Prizes, Celadon Mall)
    * [ ] **Dragon Scales** are available (consider wild Seadra/Dratini)
    * [ ] **King’s Rocks** are available (consider Wild Slowpoke/Slowbro)
    * [ ] **Metal Coats** are available (consider Wild Magnemites)
    * [ ] **Upgrades** are available (consider Silph Co)
    * [ ] **Deep Sea Scales** are available (consider Seafoam Islands, Chinchou line)
    * [ ] **Deep Sea Tooths** are available (consider Seafoam Islands, Carvanha line)








<!------------------------------------------------------------------ Pokémon --
    888b.       8
    8  .8 .d8b. 8.dP .d88b 8d8b.d8b. .d8b. 8d8b.
    8wwP’ 8’ .8 88b  8 .P’ 8P Y8P Y8 8’ .8 8P Y8
    8     `Y8P’ 8 Yb `Y88P 8   8   8 `Y8P’ 8   8
------------------------------------------------------------------------------>

<br><br>
## Pokémon
* [ ] **Special Encounters are guaranteed a perfect IV**
  * Starters, Gifts, Overworld/Legendaries
  * ⚠️ This may not be possible with Gen 3’s engine. There is not an even distribution of Natures/Genders with Perfect IVs and overwriting an IV value would make the Pokémon illegal. While changes to moves, levels, tutors will result in illegal Pokémon, I’m not sure it’s acceptable for the Personality Value to be illegal

### Changes in Future Generations
* [ ] **Base Stats** are updated
* [ ] **Hold Items** are updated
<br><br>
* [ ] **Moves** are updated (primarily based on HGSS learnsets with influence from Let’s Go)
  * [ ] **Base Learnsets** are updated
  * ⚠️ Pay attention to how this affects Trainers and early-route Pokémon. For example, FRLG moved Zubat’s Supersonic to above the level cap that Zubat can appear in Mt. Moon, as is Paras’s Poison Powder. Using the revamped learnsets from Gen 4 would lead to a significant increase in players facing Confusion and Poison in Mt. Moon
  * [ ] **TM** learnsets are updated
  * ⚠️ Some Pokémon currently learn TMs only through Egg Moves. Make sure to remove these from the Egg Move list when they’re added to the TMs list
  * [ ] **HM** learnsets are updated
  * [ ] **Move Tutor** learnsets are updated
<br><br>
* [ ] **Egg Groups are updated**
  * [ ] Add Human-Like Egg Group for Ralts
  * Can now breed with Abra, Machop, Drowzee, Hitmon’, Mr. Mime, Jynx, Electabuzz, Magmar, Makuhita, Sableye, Meditite, Volbeat/Illumise, Spinda, Cacnea
  * [ ] Add Dragon Egg Group for Trapinch
  * Can now breed with Charmander, Ekans, Horsea, Magikarp, Dratini, Treecko, Swablu, Seviper, Feebas, Bagon

### Pokémon Encounters
* [ ] **Changes to Pokémon Locations**
  * [ ] Pokémon are more diverse on Surfing/Fishing routes
  * [ ] Pokémon are more diverse in caves
  <br><br>
  * [ ] **All Kanto & Johto Pokémon are available**
    * [ ] **Trade-Exclusives** have wild encounters (Mr. Mime, Lickitung, Jynx, Farfetch’d)
    * [ ] Additional **Starters** can be obtained (Bulbasaur, Charmander, Squirtle)
    * [ ] Overworld Encounters (Snorlax)
    * [ ] Gifts (Eevee, Tyrogue, Lapras)
    * [ ] **Safari Zone Exclusives** have wild encouters (Scyther)
    * [ ] **Fossil Pokémon** can be found in Rock Smash Rocks (Kabuto, Omanyte, Aerodactyl)
    * [ ] **Version Exclusives** are available (see Pokémon > Version Exclusives)
    * These are distributed more thoughtfully, but there will still be version differences in the encounter tables
    * [ ] **Professor Elm Gives a Johto Starter** when the player has obtained all Kanto and Johto Pokémon
  <br><br>
  * [ ] **All Tickets are available**
    * [ ] **MysticTicket** is available (Lugia, Ho-oh)
    * [ ] **AuroraTicket** is available (Deoxys)
    * [ ] **Eon Ticket** is available (Latios/Latias - ported from Emerald)
    * [ ] **Old Sea Map** is available (Mew - ported from Emerald)
  <br><br>
  * [ ] **Altering Cave Pokémon are available**
  * Consider making all available that cannot be found elsewhere, having them available at different rates based on TID/SID, rotating through groups of 3 (Zubat/Aipom/Mareep, Zubat/Teddiursa/Shuckle, Zubat/Stantler/Pineco, Zubat/Smeargle/Houndoom)
<br><br>
* [ ] **In-Game Trades are revised**
* Without trade-exclusive Pokémon, in-game trades should still feel special. This could be through Egg Moves, Version-Exclusives, Rare Items, or Johto Pokémon that aren’t otherwise available
<br><br>
* [ ] **Wild Pokémon level-curve is more balanced**
* Black2/White2 is touted as an example of a good level curve. Examine the levels of Black/White encounters compared to the # of gym badges the player has at the point they access each area.

### Fishing Encounters
* [ ] **Increase hook rate when Fishing**
<br><br>
* [ ] **Increase levels of Fishing Encounters**
  * [ ] Increase levels from **Old Rod** (from level 5 to level 3-15)
  * [ ] Increase levels from **Good Rod** (from level 5-15 to level 10-25)
  * [ ] Increase levels from **Super Rod** (from level 15-35 to level 20-45)
<br><br>
* [ ] **Fishing Encounters are divided into groups**
  * [ ] **Pond** encounters are more diverse
  * [ ] **Polluted Pond** encounters are more diverse
  * [ ] **Lake** encounters are more diverse
  * [ ] **Shore** encounters are more diverse
  * [ ] **Ocean** encounters are more diverse
<br><br>
* [ ] **Old Rod encounters are more diverse**
  * [ ] Poliwag, Remoraid (Rare) can be caught in **Ponds**
  * [ ] Grimer can be caught by Old Rod in **Polluted Ponds**
  * [ ] Goldeen can be caught by Old Rod in **Lakes**
  * [ ] Krabby can be caught by Old Rod in **Shores**
  * [ ] Tentacool, Qwilfish (Rare) can be caught by Old Rod in **Oceans**

### Surf Encounters
* [ ] **Increase levels of Surf encounters** (raised from level 5-40 to level 15-45)
* [ ] **Running Shoes mechanic adjusts Surf speed**
* [ ] **Default Surf speed is increased**
* [ ] **Surfing sprites exist for all Pokémon that can learn Surf**
* This project may help (if it's open-source): [surskitty/pokeemerald > surfable](https://github.com/surskitty/pokeemerald/tree/surfable/graphics/object_events/pics/pokemon/surfable)

### Legendary Pokémon
* [ ] **Legendary Pokémon Respawn** when defeated once the player beats the Pokémon League again
* [ ] **Legendary Beasts are obtained as soon as the National Pokédex is obtained**
* [ ] **All Legendary Beasts can be obtained**
* Attempt to release all 3 roaming legendaries at once. If unable to, release them one-by-one
* [ ] **Special Music plays when Legendary Beasts are encountered** (ported from Emerald)

### Shiny Pokémon
* [ ] **Shiny Odds can be increased**
  * [ ] **Shiny Odds are set to 1/4096**
  * [ ] **Consecutive/Chain Fishing**
  * [ ] **Masuda Method** is implement if it’s possible to have foreign Pokémon
  * If possible, could a Sevii Island NPC trade the player a foreign Ditto
  * [ ] **Shiny Charm is a Key Item**
  * Consider a gift from Professor Oak/Elm if the player has obtained all Kanto and Johto Pokémon
<br><br>
* [ ] **All Pokémon Graphics include shiny variations**
  * [ ] **Party Screen Sprites**
  * [ ] **PC Storage System Sprites**
  * [ ] **Starter Selection Screen**
  * ⚠️ It appears the starters are generated after the user confirms their choice. If this can be changed, make sure the Pokémon is generated after the player clicks on the Poké Ball but before the sprite is displayed
  * [ ] **Following Pokemon Sprites** (NEW)
  * [ ] **Daycare Sprites** (NEW)
* [ ] Add an icon to the HP bar if the players or enemy Pokémon is shiny
<br><br>
* [ ] **A single Poké Ball is available in the player’s PC** at the start, so if they encounter a shiny Pokémon before returning the parcel, they have one chance to catch it

### Version Exclusives
* [ ] LeafGreen can obtain FireRed exclusives
  * [ ] **Ekans line** is found
  * [ ] **Oddish line** is found
  * [ ] **Psyduck line** is found in Ponds and around Cerulean Cave in both games
  * [ ] **Growlithe line** is found
  * [ ] **Shellder line** is found around and inside Seafoam Islands in both games
  * [ ] **Electabuzz line** is found in the Power Plant in both games
  * [ ] **Scyther** is a rare encounter on Routes 14/15 in both games (Let’s Go Pikachu)
  * [ ] **Wooper line** is found on Route 10 and in the Safari Zone on both games
  * [ ] **Murkrow** is found
  * [ ] **Qwilfish** is found on the East Coast
  * [ ] **Delibird** is found
  * [ ] **Skarmory** is found
<br><br>
* [ ] FireRed can obtain LeafGreen exclusives
  * [ ] **Sandshrew line** is found
  * [ ] **Vulpix line** is found
  * [ ] **Bellsprout line** is found
  * [ ] **Slowpoke line** is found around and inside Seafoam Islands
  * [ ] **Staryu line** is found
  * [ ] **Magmar line** is found in Cinnabar Mansion in both games
  * [ ] **Pinsir line** is found in the Safari Zone in LeafGreen and the Game Corner in FireRed
  * [ ] **Marill line** is found in the Sevii Islands and Safari Zone in both games
  * [ ] **Misdreavus line** is found
  * [ ] **Sneasel line** is found
  * [ ] **Remoraid line** is found around the Southwest Sea in both games
  * [ ] **Mantine line** is found on all Sevii Islands routes in both games
<br><br>
* [ ] New Exclusives
  * [ ] **Heracross** is found in the Safari Zone in FireRed and the Game Corner in LeafGreen (taking the place of Scyther)
  * [ ] **Ledyba** is found in Viridian Forest as an uncommon encounter in FireRed and a rare encounter in LeafGreen
  * [ ] **Weedle/Kakuna** is found in Viridian Forest as a common encounter in FireRed and an uncommon encounter in LeafGreen
  * [ ] **Spinarak** is found in Viridian Forest as an uncommon encounter in LeafGreen and a rare encounter in FireRed
  * [ ] **Metapod/Caterpie** is found in Viridian Forest as a common encounter in LeafGreen and an uncommon encounter in FireRed








<!-------------------------------------------------------------------- Moves --
    8b   d8
    8YbmdP8 .d8b. Yb  dP .d88b d88b
    8  “  8 8’ .8  YbdP  8 .P’ `Yb.
    8     8 `Y8P’   YP   `Y88P Y88P
------------------------------------------------------------------------------>

<br><br>
## Moves

### Changes in Future Generations
* [ ] Update **Move Names** (Dragonbreath to Dragon Breath)
* [ ] Update **Move Types** (Fairy types, Curse from ??? to Ghost)
* [ ] Update **Move Power**
* [ ] Update **Move Accuracy**
* [ ] Update **PP Counts**
* [ ] Update **Move Priority**
* [ ] Update **Contact
* [ ] Update **Move Targetting**
* [ ] Update **Interactions** for Magic Coat, Mirror Move, Protect, & Snatch
* [ ] Update **Contest Types** (if exists in codebase)
* [ ] Update **Secondary Effects**
<br><br>
* [ ] **Weather Interactions are updated**
  * [ ] Blizzard ignores accuracy checks during Hail
  * [ ] Growth increases Attack/Sp. Attack by 2 stages during Sunlight
  * [ ] Hail increases Defense of Ice types by 50%
  * [ ] Sandstorm increases Special Defense of Rock types by 50%
  * [ ] Weather Ball can be learned by Lugia, Ho-Oh, Castform, Snorunt, and Glalie
<br><br>
* [ ] **Type Interactions are updated** based on future generations
  * [ ] Grass Types are immune to Spore and Powder moves (Cotton Spore, Poison Powder, Sleep Powder, Spore, Stun Spore)
  * [ ] Ghost Types can always flee from battle
  * [ ] Electric Types are immune to Paralysis
  * [ ] Bide no longer hits Ghost Types
  * [ ] Whirlpool no longer traps Ghost Types
  * [ ] Toxic bypasses accuracy when used by Poison Types

### Hidden Power
* [ ] **Hidden Power** displays its current type
  * [ ] Hidden Power Type is displayed in the Pokémon summary screen
  * [ ] Hidden Power Type is displayed in the Move Selection in battle
  * [ ] Hidden Power Type is displayed in “Choose a Move to Delete” screen
* [ ] **Hidden Power** is always a Special move

### TMs / HMs
* [ ] **TMs are reusable**
* This open-source project may help: [tezemi/pokefirered-updated](https://github.com/tezemi/pokefirered-updated)
  * [ ] TMs do not display a quantity
  * [ ] TMs cannot be sold
  * [ ] Only 1 of each TM is available
    * [ ] Celadon Department Store no longer sells TMs (TM15 Hyper Beam was the only one not available elsewhere)
    * [ ] Game Corner TMs can only be purchased once
    * [ ] TM10 can no longer be obtained from Pickup
    * [ ] If player obtains a TM they already have, add it silently
  * [ ] Adjust the TMs/HMs option of the Debug Menu
<br><br>
* [ ] **Changes to TM Locations**
  * [ ] TM10 Hidden Power is given by a Silph Co. NPC (dialogue suggests he designed it)
  * [ ] TM15 Hyper Beam has been added
  * [ ] TM36 Sludge Bomb has been moved (Venusaur should have access to a Poison STAB before the postgame)
  * Move TM36 Sludge Bomb to Fuschia Gym, then move TM06 Toxic to Silph Co. 4F, then move TM41 Torment to Five Island Rocket HQ

### Move Tutors
* [ ] **Move Tutors are Reusable**
* [ ] **Move Tutor can overwrite HMs**
* [ ] **Additional Move Tutors** are added
  * [ ] Pikachu learns Surf from a tutor on Route 19 (South of Fuchsia)
  * [ ] Mew learns XD Moves from a tutor in Mr. Fuji’s home
  * [ ] Emerald Tutor Moves are available
  * Consider Platinum, HeartGold/SoulSilver, Black2/White2 tutor moves
  * New Move Tutors are divided in Pokémon Centers to mirror Let’s Go. They are a Juggler NPC found in Cerulean City, Celadon City, Fuchsia City, and the Pokémon League lobby
  * They may charge a valuable item (Mushrooms, Pearls, Stardust/pieces, Nugget) or money but should not be free

### Move Relearner
* [ ] **Relearner Moves can be taught** (Level 1 moves given to Evolved Pokémon)
* [ ] **Move Relearner is located on the mainland**
* Consider adding to the Move Deleter’s house in Fuschia City
* an NPC may mention a move they don’t remember teaching:<br>_“My Ninetales remembered Flamethrower. I don’t remember teaching that.”_
* [ ] **Move Relearner is free**

### Physical/Special Split
* This open-source project may help [tezemi/pokefirered-updated](https://github.com/tezemi/pokefirered-updated)
  * [ ] Each move is Physical or Special
  * [ ] Moves are labelled Physical or Special
  * [ ] Hidden Power is a Special Move








<!------------------------------------------------------------------ Battles --
    888b.       w    w   8
    8wwwP .d88 w8ww w8ww 8 .d88b d88b
    8   b 8  8  8    8   8 8 .P’ `Yb.
    888P’ `Y888 Y8P  Y8P 8 `Y88P Y88P
------------------------------------------------------------------------------>

<br><br>
## Battles
* [ ] **Double Battles start** when two trainers see you at once
* [ ] **Major Trainers have custom dialogue when they get down to their ace**
* [ ] **All Rocket Grunts and Rocket Executives have names**
<br><br>
* [ ] **Trainers have more Hold Items**
  * [ ] Starting with Badge 3, Gym Leaders and significant trainers include a Sitrus Berry or Lum Berry on their ace (HG/SS)
  * [ ] High-level **Alakazam** can hold Twisted Spoon
  * [ ] High-level **Kingler** can hold King’s Rock (C)
  * [ ] High-level **Magcargo**, **Magmar**, **Rapidash** can hold White Herb (HG/SS)
  * [ ] High-level **Nidoqueen** can hold Silk Scarf (C)
  * [ ] High-level **Pikachu** can hold Light Ball (HG/SS)
  * [ ] High-level **Rapidash** can hold Focus Band (C)
  * [ ] High-level **Weezing** can hold Smoke Ball (R/S/E)
<br><br>
* [ ] **Trainer level-curve is more balanced**
  * [ ] Trainers have increased levels on their teams
  * [ ] Trainers have additional Pokémon on their teams
  * Black2/White2 is touted as an example of a good level curve. Examine the levels of Black/White trainers compared to the # of gym badges the player has at the point they access each area.
  * The stretch between Koga and Sabrina, between Sabrina and Blaine, and from Blaine to the Elite Four are particularly unbalanced. When updating make sure to weigh the need for additional EXP before the Elite Four alongside the concern about making already difficult locations more balanced
  * Also consider that the trainer has earlier access to STAB Moves, wider Learnsets, Stat Buffs for less viable Pokémon, Unlimited TMs and Tutors, Catching EXP, and more. Some trainers will need to become more difficult because of this, but THIS IS NOT A DIFFICULTY HACK
<br><br>
* [ ] **Trainers use Johto Pokémon**
* Referencing G/S/C/HG/SS, existing Trainer Classes are given Johto Pokémon to use. These are sprinkled across Kanto trainers
* In Kanto, only give trainers Johto Pokémon that can be captured in Kanto mainland. An exception can be given for SS Anne trainers if dialogue is included that they cannot be captured in Kanto

### Fairy Type
* [ ] **Pokémon are typed to Fairy**
* [ ] **Moves are typed to Fairy**
* [ ] **Type-Chart is updated to match Gen 6**
* This open-source project may help: [tezemi/pokefirered-updated](https://github.com/tezemi/pokefirered-updated)

### Gym Leaders
* [ ] **Rebattle Gym Leaders** once Elite Four is defeated
* Their Final Teams are based on all canon appearances but primarily HeartGold/SoulSilver
* [ ] **Gym Leader teams include Johto Pokémon** (related to their final appearances)
* For example, Misty has a Wooper and Erika has a Bellossom
* [ ] **Gym Trainers all use Pokémon of that Gym’s Type**
* No more Ground-only trainers in Btock’s Gym, Psychic-only trainers in Koga’s Gym, or Fighting-only trainers in Giovanni’s Gym
* [ ] **Animate Gym Leader sprites**
* [ ] **Gym leaders have custom dialogue when they get down to their ace**

### Trainer Classes
* [ ] **Each Trainer Class has a unique overworld sprite**
* This open-source project may help: [Poké Community thread](https://www.pokecommunity.com/showthread.php?t=407124)
* [ ] **Rocket Executives have custom sprites**
* They are identified in the Rocket Warehouse; consider the Game Corner Rocket Hideout, Mt. Moon, and Silph Co.
* [ ] **Custom Poké Balls are used by Trainers**
* Consider Net Balls for Bug Maniacs, Dive Balls for Fisherman,...
* Trainer sprites are updated to match their custom Poké Balls
* [ ] **Each trainer class has custom music that plays** before the battle starts (pull inspiration from Platinum)








<!-------------------------------------------------------------------- Items --
    888  w
     8  w8ww .d88b 8d8b.d8b. d88b
     8   8   8 .P’ 8P Y8P Y8 `Yb.
    888  Y8P `Y88P 8   8   8 Y88P
------------------------------------------------------------------------------>

<br><br>
## Items
* [ ] **Running Shoes are available from the start**
* ⚠️ Be sure to give Professor Oak’s Aide in Pewter something else (Exp. Share?)
* [ ] **Running speed is increased**
<br><br>
* [ ] Bicycle is replaced with the Mach Bike (ported from Emerald)
<br><br>
* [ ] **Disposable items come in quantities**
  * [ ] When given by NPCs or found on the ground, give 1x, 3x, or 5x
<br><br>
* [ ] **Valuable items** are more common as hidden items
  * [ ] **Pearls** are more common on the coast
  * [ ] **Heart Scales** are more common on the coast
  * [ ] **Tiny Mushrooms** are more common in caves and forests
  * [ ] **Star Pieces** are found in Mt. Moon and Cerulean Cave
* [ ] Hidden Items are added across Sevii Islands
* Many maps don’t have hidden items despite having rocks, blank grass patches, and coasts)

### Changes in Future Generations
* [ ] **Rename Items**
  * [ ] “Stick” is renamed to “Leek”
  * [ ] “X Defend” is renamed to “X Defense”
  * [ ] “X Special” is renamed to “X Sp. Atk”
  * [ ] “Up-Grade” is renamed to “Upgrade”
  * [ ] “BlackGlasses” is renamed to “Black Glasses”
  * [ ] “BrightPowder” is renamed to “Bright Powder”
  * [ ] “DeepSeaScale” is renamed to “Deep Sea Scal”
  * [ ] “DeepSeaTooth” is renamed to “Deep Sea Toot”
  * [ ] “EnergyPowder” is renamed to “Energy Powder”
  * [ ] “NeverMeltIce” is renamed to “Never-Melt Ic”
  * [ ] “Paralyz Heal” is renamed to “Paralyze Heal”
  * [ ] “SilverPowder” is renamed to “Silver Powder”
  * [ ] “Thunderstone” is renamed to “Thunder Stone”
  * [ ] “TinyMushroom” is renamed to “Tiny Mushroom”
  * [ ] “TwistedSpoon” is renamed to “Twisted Spoon”
<br><br>
* [ ] **Increase boost from type-boosting items**
  * [ ] **Black Belt**’s boost is increased from 10% to 20%
  * [ ] **Black Glasses**’s boost is increased from 10% to 20%
  * [ ] **Charcoal**’s boost is increased from 10% to 20%
  * [ ] **Dragon Fang**’s boost is increased from 10% to 20%
  * [ ] **Hard Stone**’s boost is increased from 10% to 20%
  * [ ] **Magnet**’s boost is increased from 10% to 20%
  * [ ] **Metal Coat**’s boost is increased from 10% to 20%
  * [ ] **Miracle Seed**’s boost is increased from 10% to 20%
  * [ ] **Mystic Water**’s boost is increased from 10% to 20%
  * [ ] **Never-Melt Ice**’s boost is increased from 10% to 20%
  * [ ] **Poison Barb**’s boost is increased from 10% to 20%
  * [ ] **Sharp Beak**’s boost is increased from 10% to 20%
  * [ ] **Silk Scarf**’s boost is increased from 10% to 20%
  * [ ] **Silver Powder**’s boost is increased from 10% to 20%
  * [ ] **Soft Sand**’s boost is increased from 10% to 20%
  * [ ] **Spell Tag**’s boost is increased from 10% to 20%
  * [ ] **Twisted Spoon**’s boost is increased from 10% to 20%
  * [ ] **Sea Incense**’s boost is increased from 5% to 20%
<br><br>
* [ ] **Other Hold Item changes**
  * [ ] **Cleanse Tag**’s reduced encounter rate does not stack with the Abilities Arena Trap, Sand Veil, and White Smoke, but does stack with Intimidate and Keen Eye
  * [ ] When **Exp. Share** is activated, battling Pokémon get 100% of experience and the holding Pokémon gains 50% experience
  * [ ] **King’s Rock**’s flinch chance applies to all contact moves and stacks with Serene Grace
  * [ ] **Lax Incense**’s accuracy drop is increased from 5% to 10%
  * [ ] **Mental Herb** cures Taunt, Encore, Torment, Heal Block, and Disable
  * [ ] **Smoke Ball** no longer allows Pokémon to Teleport while trapped and its in-battle effect is nullified once the holder faints
  * [ ] **Soothe Bell**’s friendship boost stacks with bonuses from the Luxury Ball and Met Location
  * [ ] **Soul Dew** increases Psychic & Dragon type moves by 20% instead of increasing Special Attack and Special Defense by 50%. Description reads “A wondrous orb to be held by LATIOS or LATIAS. It boosts both Pyschic and Dragon-type moves.”
<br><br>
* [ ] **EV-boosting berries are implemented**
  * [ ] These lower their target EV to 100 after their 1st use and by 10 thereafter
  * [ ] These increase friendship by 10 pts up to 99 and by 5 pts thereafter
  * [ ] Descriptions are _“Makes a POKéMON friendly but it also lowers its base [xxx]”_
  * [ ] **Pomeg Berry** lowers HP EVs
  * [ ] **Kelpsy Berry** lowers Attack EVs
  * [ ] **Qualot Berry** lowers Defense EVs
  * [ ] **Hondew Berry** lowers Special Attack EVs
  * [ ] **Grepa Berry** lowers Special Defense EVs
  * [ ] **Tamato Berry** lowers Speed EVs
<br><br>
* [ ] **Repels can be chained**
<br><br>
* [ ] **Dive Balls work while Surfing and Fishing**
* Description should read _“A somewhat different Ball that works especially well on Pokémon that live in the sea.”_

### Cost Changes
* [ ] **Vitamins cost ¥4900** in the postgame
<br><br>
* [ ] **Status Berries** can be purchased for ¥150
* [ ] **Leppa Berries** and **Lum Berries** can be purchased for ¥1200
* [ ] **Stat-Reducing Berries** can be purchased for ¥1800
* [ ] **All Berries** sell for ¥50

### Gen 3 Poké Balls
* [ ] **Premier Balls are gifted** when 10 of ANY Poké Ball is purchased
<br><br>
* [ ] **All Poké Balls are available**
  * [ ] The TM Counter at the Celadon Department Store is replaced with a Poké Ball counter that includes most Gen 3 Poké Balls
  * [ ] Dive Balls are exclusive to coastal towns (similar to RSE/BW/B2W2)
  * [ ] Luxury Balls are exclusive to the Pokémon League (similar to DPPt/BW/B2W2)
  * [ ] Other Poké Balls are scattered throughout Poké Marts

### Respawning Items
* [ ] **Many items respawn** based on the step cycle
  * [ ] **Berry Spots** all respawn (see Mechanics > Berry Spots)
  * [ ] **Coins** on Game Corner floor may respawn








<!---------------------------------------------------------------- Mechanics --
    8b   d8            8                w
    8YbmdP8  d88b  d8b 8d8b   d88 8d8b  w  d8b d88b
    8  “  8 8  P’ 8    8P Y8 8  8 8P Y8 8 8    `Yb
    8     8 `Y88P `Y8P 8   8 `Y88 8   8 8 `Y8P Y88P
------------------------------------------------------------------------------>

<br><br>
## Mechanics

### Abilities
* [ ] **Pickup tables are overhauled** (Base code on Emerald implementation with HG/SS tables)
<br><br>
* [ ] **Implement Overworld Ability Effects**
  * [ ] **Arena Trap**: Raises encounter rate of wild Pokémon (lead spot)
  * [ ] **Magnet Pull**: Raises encounter rate for Steel types by 50% (lead spot)
  * [ ] **Static**: Raises encounter rate for Electric types by 50% (lead spot)
  * [ ] **Hustle/Keen Eye/Pressure/White Smoke**: Lowers encounter rate of wild Pokémon (lead spot)
  * [ ] **Intimidate**: Lowers encounter rate for lower level wild Pokémon (lead spot)
  * [ ] **Vital Spirit**: Lowers encounter rate of high-level Pokémon (lead spot)
  * [ ] **Compoundeyes**: Raises rates of held items (lead spot)
  * [ ] **Cute Charm**: Raises rates of opposite-gender Pokémon (lead spot)
  * [ ] **Synchronize**: Raises rates of Pokémon with the same nature by 50% (lead spot)
  * [ ] **Flame Body/Magma Armor**: Halves the steps required to hatch eggs
  * [ ] **Hyper Cutter**: Cut removes a larger area of tall grass
  * [ ] **Sticky Hold/Suction Cups**: Pokémon on fishing rod are easier to catch
  * [ ] **Sand Veil**: Lowers rates of wild Pokémon during Sandstorms (Not Applicable?)
  * [ ] **Swarm**: Pokémon cries are heard more often (Not Applicable?)

### Breeding
* [ ] **Day Care outside Cerulean City fully functional**
  * [ ] An outside NPC shows when an Egg is ready
  * [ ] House is easy to access and no longer features ledges (take inspiration from [fan redesigns](https://www.reddit.com/r/PokémonRMXP/comments/qow1gb/my_rework_of_route_5_in_kanto_what_do_you_think/))
  * If this is achieved by switching the interiors of the Day Cares, give the Four Island Day Care a reason to use it. Maybe an Experience Boost?
<br><br>
* [ ] **Breeding Engine is revised**
  * [ ] Everstone passes the parent’s Nature 100% of the time, regardless of gender
  * [ ] Flame Body/Magma Armor makes Eggs hatch more easily
  * [ ] Mother’s Nature has increased odds of passing
  * [ ] The same stat can no longer be passed more than once (3 different stats are always passed)
  * [ ] Breeding a Pikachu with Light Ball gives the resultant Pichu Volt Tackle
  * [ ] Eggs hatch at Level 1
  * ⚠️ Make sure this doesn’t cause bugs. Eggs may have been set to Level 5 to avoid stat/exp underflow errors. Also test for problems when trading with genuine copies of RSE/FRLG
  * [ ] Poké Balls are passed from parents to offspring

### Berry Spots
* [ ] **All Berry Spots respawn** during the step cycle
* [ ] **Berry Spots yeild 1-3 berries** at a time
* [ ] **Berry Spots have separate graphics** for if they are full or empty
* [ ] **Berry yield is randomly selected from pools** of possible berries
* Pools should include status berries and stat-reducing berries

### Decorations
* [ ] **The player can decorate their room** (ported from Emerald)
<br><br>
* [ ] **All Dolls of Kanto Pokémon can be obtained**
  * [ ] **Selected Starter Pokémon**: Given by the player’s mom once the starter evolves
  * [ ] **Blue’s Starter Pokémon**: Given by Daisy once the Elite Four is defeated
  * [ ] **Alternate Starter Pokémon**
  * [ ] **Small Kanto Dolls**, **Lapras**, **Rhydon**, **Snorlax**: gifted by an aide in Professor Oak’s lab if the player has caught them
  * [ ] **Small Johto Dolls**:
  * [ ] **Small Hoenn Dolls**, **Wailmer**: purchasable from a girl in the Two Island
  * [ ] **Regi’ Dolls**: gifted by a hiker in Ruin Valley if the player has caught the Legendary Titans
<br><br>
* [ ] **Silver Shield** and **Gold Shield** are obtainable

### Following Pokémon
* [ ] **Pokémon follow the player around**
* [ ] **Every Pokémon has following graphics**
* [ ] **Pokémon have interactions when spoken to**
* [ ] **Other trainers may have Pokémon beside them** referencing their Ace or dialogue

### Fly
* [ ] **Fly points are registered for all Routes**
* Fly point should be directly in front of any route signs
* There is already Fly data programmed in the game for each route in the [Debug Menu](https://tcrf.net/Proto:Pok%C3%A9mon_FireRed_and_LeafGreen/Debug_Menu)
<br><br>
* [ ] **Town Map/Fly Interface lists all landmarks**
* For example, Cinnabar Island can have Pokémon Mansion and Science Lab labelled
<br><br>
* [ ] **Connect Maps** so trainer flies freely fly Sevii Islands and the mainland
  * [ ] **Condense Sevii Islands to a single screen**
  * [Serebii has a map laying out](https://www.serebii.net/pokearth/kanto/3rd/) where these islands are in relation to the mainland. It’s okay to condense these islands into one screen if needed
  * Consider an interface where the map has an icon in the corner that allows the player to switch to the other map. If this is too difficult, the icon could be programmed to the Fly locations for Vermilion City and One Island
  * [ ] Update the Pokédex’s “Area Found” interface to use this map

### Game Corner
* [ ] **Game Corner rates are increased**
<br><br>
* [ ] **Game Corner payouts are increased**
  * [ ] Raise **Rockets** payout from 100 to 150
  * [ ] Raise **Pikachu** payout from 15 to 30
  * [ ] Raise **Magnemite/Voltorb** payout from 8 to 15
  * [ ] Raise **Shelder/Staryu** payout from 8 to 10
  * [ ] Raise **Single Poké Ball** payout from 2 to 3
<br><br>
* [ ] **Game Corner prize prices are standardized**
  * [ ] **Abra**      180 coins
  * [ ] **Clefable**  FR / **Clefairy**  LG 1000 coins
  * [ ] **Heracross** FR / **Pinsir**    LG 2800 coins
  * [ ] **Dratini**   FR / **Dragonair** LG 4600 coins
  * [ ] **Porygon**  6500 coins
  * [ ] **Larvitar** 9999 coins
<br><br>
* [ ] **Roulette Game is playable** (ported from Emerald)

### PC System
* [ ] **Move Items feature**
* [ ] **Send Gift Pokémon to PC** if the player’s party is full
* [ ] **Retrieve Pokémon from PC during Trades**

### Weather
* [ ] **Current Weather thumbnail** is displayed during battle
* [ ] **Overworld sandstorm appears** on Canyon Entrance, Sevault Canyon, and Tanoby Ruins. Encounters are revised to more heavily feature Rock, Ground, and Steel types
* [ ] **Implement Weather Interactions** of moves (see Moves > Changes in Future Generations)
* [ ] **Weather Moves stop after 5 turns** unless Overworld or Abilities initiated it

### Quality of Life
* [ ] **Catching Tutorial is optional**
* [ ] **Experience is gained from Catching Pokémon**
* [ ] **20% Boosted Experience is gained by Pokémon who rejected evolution**
* [ ] **Survive Poisoning**
* [ ] **Potions, Vitamins, Rare Candies remain on the party screen** after use
* [ ] **Catching Tutorial can be skipped**
<br><br>
* [ ] **Rock Smash can give items and additional Wild Encounters**
  * [ ] Rock Smash rocks can give Fossils, Ethers, Star Pieces, and other items
  * [ ] Rock Smash rocks can encounter Geodude, Shuckle, Nose
  * [ ] Rock Smash rocks can be given Shuckle
  * [ ] Rock Smash Rocks are added throughout the region (Consider HGSS locations, but also caves and routes with dirt paths)
<br><br>
* [ ] Allow traded Pokémon to be renamed
* If nicknamed: _“[xxx] was given their name by [xxx]. Are you sure you want to change it? Y/N”_ else _continue as usual_
<br><br>
* [ ] Shorten dialogue for interacting with HM objects
* Interactable objects are Trees (Cut), Boulders (Strength), Water (Surf)
* If the player clicks on the object, do not show dialogue: Click on tree > Animation > Bellsprout used Cut
* If the player walks into the object, provide a prompt
* If the player empties a dark cave, provide a prompt “It’s hard to see. Would you like to use Flash?”









<!----------------------------------------------------------- World-Building --
    Yb        dP            8    8    888b        w 8    8 w
     Yb  db  dP   d8b  8d8b 8  d88    8wwwP 8   8 w 8  d88 w 8d8b   d88
      YbdPYbdP   8’  8 8P   8 8  8    8   b 8b d8 8 8 8  8 8 8P Y8 8  8
       YP  YP    `Y8P’ 8    8 `Y88    888P’ `Y8P8 8 8 `Y88 8 8   8 `Y88
                                                                   wwdP
------------------------------------------------------------------------------>

<br><br>
## World-Building
* [ ] On SS Anne, Rival brags about having 40 kinds of Pokémon. Change this dialogue so it reflects the number of lines available
* [ ] Oak should have custom dialogue if the player returns with the Parcel with an updated starter
* [ ] A Charcoal can be placed in Victory Road where Moltres is found in Gen 1
* [ ] Increase Wailord's weight in the Pokédex to match a real whale
<br><br>
* [ ] **Book Shelves have a lot more language**
* Bookshelves talk more about different features: overworld abilities, stat-reducing abilities, locations of NPCs such as Move Reminder or Hidden Power teacher
* This is a good place to bring up changes made in this hack
<br><br>
* [ ] **Revise Sevii Island Plot**
* Canonically, Celio is setting up the technology to trade with the Hoenn region. With trade restrictions lifted, this plot no longer makes sense. It may be possible to retain much of the plot by changing dialogue to focus on connecting with the whole world. Or to give Celio a bigger project that Team Rocket’s presence is directly conflicting with


### Cameos
* [ ] **“Black Belt Koichi” is renamed to “Karate Master Koichi”**
* [ ] **One Fighting Dojo Trainer is named Kiyo**
* Kiyo is Gen 2’s “Karate King” who takes over the dojo from Koichi
* Maybe replace Mike because his name is the least exciting or Aaron because he has 1 Pokémon and the team will need to be revised anyway
* [ ] **Janine is placed Koga’s Gym**
* This implies that Janine is working in Koga’s Gym before she takes it over
* In FRLG, she is outside the Pokémon Zoo _“My father is the GYM LEADER of this town. I’m training to use POISON Pokémon as well as my father.”_
  * [ ] Correct the typo in her name “Charine”
  * [ ] Replace her sprite with the appropriate Trainer Class
* [ ] **A trainer in Sabrina’s Gym is implied to be Will**
  * Give custom dialog. Obfuscate as William
* [ ] **A Victory Road trainer is implied to be Karen**
  * Give custom dialog. Obfuscate as Katherine
* [ ] **International Agent on S.S. Anne is implied to be Looker**
* [ ] **Victory Road trainers are implied to have started from Pallet Town**
* [ ] **All Rocket Executives should be present**
* Archer and Ariana will have custom sprites and their Johto teams
* Petrel and Proton will be Rocket Grunts but retain their Johto teams
* [ ] **A Silph Co Employee mentions radio waves** implying the forced evolution of Gen 2
* Silph Co Scientist: _“I’m a very important Scientist. I’m working on a frequency that can help Pokémon evolve.”_ (Give him Electrodes to parallel Johto setup)
<br><br>
* [ ] Implement Jigglypuff graffiti from Gen 1
* [ ] Implement Celadon Condominiums graffiti from Gen 2
* [ ] Change final Nugget Bridge trainer into a Rocket Costume before battle starts
* [ ] **A static Cubone appears in Pokémon Tower** after Team Rocket is disbanded (8 badges)
* It is implied to be the child of the Marowak ghost and stands in its place. It knows Shadow Punch and respawns when the Elite Four is beaten
* [ ] Can the Marowak Ghost be given the Ground/Ghost typing?
* [ ] Adjust Sara and Erik’s dialogue in Fuchsia City/Safari Zone (in Japanese version, their dialogue is a joke?)

### New NPCs
* [ ] Gym guy gives out Fresh Water
* [ ] An NPC gives the player a type-boosting item based on the starter they selected (Miracle Seed, Mystic Water, Charcoal)
* [ ] An NPC tells the player about their Hidden Power
* Consider separate messages for 35-46, 47-58, 59-70 ranges
* “I know all about Hidden Power. Do you want to learn about your Pokémon’s power? Your [Pikachu]’s Hidden Power is [Ice Type] [but it’s not very strong]”
* Consider placing this NPC in Silph Co’s lobby once Rocket has been cleared out. He can give the TM10 Hidden Power as a reward. “Thank you for rescuing us. I know all about Hidden Power. I developed its TM.”

### Merchants
* [ ] **Mt. Moon Pokémon Center clerk**
* Consider Poké Ball, Potion, Cheri Berry (Paralysis), Repel, Escape Rope
* [ ] **Dark Tunnel Pokémon Center clerk**
* [ ] **Young Girl sells a selection of berries she picks**
* She may be located in the passage North of Viridian Forest. She can start by selling status-healing berries but can be given Leppa, Lum, and EV reducing berries later on
* [ ] **Channeler in Lavender Town sells Incense, Spell Tag, Cleanse Tag**
  * She may also sell additional Soothe Bells once the player has picked it up
  * She is unable to focus until the plot of Pokémon Tower is resolved
  <br>_“Here I sell tokens for mourners visiting Pokémon Tower. The spirits are restless and angry. You must stay away.”_
  <br>_“Apologies for my behavior. The spirits are at peace once more.”_
  <br>_“Here I sell tokens for mourners visiting Pokémon Tower.”_
* [ ] **Postman sells different mails**








<!---------------------------------------------------------- Visuals & Audio --
   Yb    dP w                 8         dP8P       db             8 w
    Yb  dP  w d88b 8   8  d88 8 d88b    Ybww      dPYb   8   8  d88 w  d8b
     YbdP   8 `Yb  8b d8 8  8 8 `Yb     dP       dPwwYb  8b d8 8  8 8 8’  8
      YP    8 Y88P `Y8P8 `Y88 8 Y88P    Yb8b    dP    Yb `Y8P8 `Y88 8 `Y8P’
------------------------------------------------------------------------------>

<br><br>
## Visuals & Audio
* [ ] In-Game Trade Pokémon appear next to their NPC. The sprite updates after the trade to reflect the new Pokémon
* [ ] Pokémon deposited at the Daycare are visible behind it
<br><br>
* [ ] **Route Change signs have backgrounds**

### User Interface
* [ ] **Stats are highlighted based on the Pokémon’s Nature** (boosted in red, reduced in blue)
* [ ] **Pressing L on the stat screen replaces stats with IVs**
* [ ] **Pressing R on the stat screen replaces stats with EVs**
<br><br>
* [ ] **Introduce Level-Up Animation** for when Pokémon are ready to evolve
* Flametix demoed a [level-up animation](https://www.youtube.com/watch?v=qFnQL1jPz8w). They found an unused animation in Ruby/Sapphire code to flash the EXP Bar on level up. They repurposed it with a more complex animation that only appears if the Pokémon is ready to evolve

### Pokémon Sprites
* [ ] **Each Pokémon has an animated front-sprite**
* [ ] **Back-sprites of Johto Pokémon are retouched** (these got less attention in Gen 3 and often have rougher lines/shading
* [ ] **Pokémon have gender differences**

### Tileset Changes
* [ ] **Colors are incorporated into each town to match its name**
  * [ ] Pokémon Center interior colors are based on town
* [ ] **Gym palette matches the color of its type specialty**
* [ ] **Dome and Helix fossils have separate overworld graphics**
* [ ] **Evidence of construction surrounds the man in Vermilion City**
* [ ] Cerulean Caverns graphics are updated to features crystals such as in the Let’s Go games and HGSS and a revised color scheme. The crystals flicker like candlelight
* [ ] Pokémon Mansion graphics are updated to feature laboratory equipment resembling the Let’s Go games
* [ ] **On Route 13, east of fence maze**, the grassy area should have a ledge to jump out onto the docks, like in Gen 4

### GameBoy Sounds
* [ ] Implement GameBoy Sounds Key Item
* GameBoy Sounds can be gifted to the player by the Music Director at Game Freak in Celadon City
* [ ] GameBoy Sounds should have each music track
* [ ] GameBoy Sounds should be retained if the player powers off their machine

### Music
* [ ] **Custom Route Music for reused tracks**
* Repurpose tracks for Gen 2, such as the song for when chansey plays. Avoid iconic Gen 2 tracks, but other tracks are fair game
* [ ] **Incorporate Pokémon Cries into Route Music** (ported from Emerald)








<!------------------------------------------------------------------ Options --
     d88b        w   w
    8P  Y8 88b  w8ww w  d8b  8d8b  d88b
    8b  d8 8  8  8   8 8’  8 8P Y8 `Yb
    `Y88P’ 88P’  Y8P 8 `Y8P’ 8   8 Y88P
           8
------------------------------------------------------------------------------>

<br><br>
## Options
* [ ] Set default `TEXT SPEED` to `FAST` (optionsTextSpeed)
* [ ] Create a `TEXT SPEED` of `FASTER`
<br><br>
* [ ] Set default frame to `TYPE 3` (red) for FireRed and `TYPE 4` (green) for LeafGreen
<br><br>
* [ ] Create a `RUNNING` option with `B TO RUN`, `B TO WALK`, `ALWAYS RUN`. Default to `B TO RUN`

### Auto-Save
* [ ] **Create an `AUTO SAVE` Option**
  * [ ] `ALWAYS`: The game will automatically save every time the player heals at the Pokémon Center
  * [ ] `ASK` (default): The Pokémon Center Clerk will ask the player if they want to Save the game after their Pokémon is healed
  * [ ] `NEVER`: Auto-Save is disabled
<br><br>
* [ ] **Pokémon Center dialogue is shorter**
* [ ] **Pokémon Center dialogue is even shorter if the player has at least 1 trainer card star**
* [ ] **Pokémon Center heal animation is shorter**
* [ ] **Pokémon Center heal animation ignores Eggs**








<!------------------------------------------------- Bugfixes & Optimizations --
    888b              d8b w
    8wwwP 8   8  d88  8’  w Yb dP  d88b d88b
    8   b 8b d8 8  8 w8ww 8  `8   8  P’ `Yb
    888P’ `Y8P8 `Y88  8   8 dP Yb `Y88P Y88P
                wwdP
------------------------------------------------------------------------------>

<br><br>
## Bugfixes & Optimizations
* [ ] **Accept `REVISION 1` bugfixes**
  * [x] Fix errors in Pokédex description
  * [x] Fix Pokédex bug that crops category labels (Squirtle is the “Tiny Turtle” Pokémon, not the “Tiny” Pokémon)
<br><br>
* [ ] **Accept `BUGFIX` bugfixes**
<br><br>
* [ ] **Accept `UBFIX` bugfixes**
<br><br>
* [ ] **Fix the held item loss glitch**
* Kadabra, Haunter, Machoke, Graveler lose their hold item when they evolve via trade
* [ ] **Fix Roaming Legendaries IV Bug**
* [ ] **Fix Roaming Legendaries Roar Bug**
* [ ] **Player can retain S.S. Ticket** if they skip the Cut Master but start the Sevii Islands plot
* [ ] **All strains of Pokérus available**
* [ ] **Investigate Safari Zone Mechanics** and tweak them if needed. The optimal strategy should not be to just hurl Poké Balls
* [ ] **Nidoking can breed with Nidoqueen**
* [ ] **Cerulean City man has additional dialogue**. He is supposed to have several dialogue options and gives the player berries based on different conditions
* [ ] **Correct typo in Teachy TV items program** “Key Items Pocket” is mis-spelled as “Key Items Pokcet”
* [ ] **Create a shortcut to open the [Debug Menu](https://tcrf.net/Proto:Pok%C3%A9mon_FireRed_and_LeafGreen/Debug_Menu)**
<br><br>
* [ ] **Deprecate unused content**
  * [x] Remove unused Pokédex descriptions (dummy text)
  * [x] Remove unused Hoenn Pokédex data/functions
  * [ ] Remove unused `OLD_UNOWN_` code








<br><br>
Headings are created with https://patorjk.com/software/taag/ with the “Thick” font
<br>Unicode ’ “” é ¥

### Other Ideas
* [ ] Give the champion ribbon when E4 is beaten
* [ ] Implement Effort Ribbon
* [ ] Add more info to Pokédex (SmithPlays added Types, Level Up Moves, Base Stats) - Have an NPC that upgrades your Pokédex?
