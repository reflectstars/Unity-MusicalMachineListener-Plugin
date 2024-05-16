/*
 *  Sound.h
 *  AudioFeatures
 *
 *  Created by Nick Collins on 01/08/2007.
 *  Copyright 2007 Nick Collins. All rights reserved.
 *
 */

#pragma once

//817 audio files
const char *strings[] = {
    
    "/data/audio/mirdata/EMcorpus/PeterManning/A Noite, Porem, Rangeu E Quebrou.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Beachcombers.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Bins And Bells.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Kettle And Cans.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Tins And Tanks.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Buckets And Bolts.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Pots And Pans.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Centoph.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Dreamfile.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Hunt, Jerry_ Fluud for dual Syncl.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Everything Goes When The Whistle.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Chor Der Waisen.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Still Hidden Laughs.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/I Tol D. You So.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/sunSurgeAutomata.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Wasting.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Contraption.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Still Life With Piano.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Martin Butler.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Elmore.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Approximate Rhythms.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Just-More-Idle-Chatter.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Quadro.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Memory Pages.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Notjustmoreidlechatter.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Lesson.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Word Color.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Idle Chatter.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Erosphere.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Puzzlasept.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Bocalises.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/D'un Jardin À L'Autre.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Suite N.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/L'invitation Au Départ.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/La Ronde.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/La Roue Ferris.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Touch - Part I.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Touch - Part II.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Expo '85 for multiple synthesizer part1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Expo '85 for multiple synthesizer part2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Expo '85 for multiple synthesizer part3.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Expo '85 for multiple synthesizer part4.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Sud (A).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Sud (B).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Sud (C).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Dialogues.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Inharmonique.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Mutations.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Joel Chadabe _ Modalities.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Neil Rolnick & Kathleen Myers _ R.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Neil Rolnick _ A Robert Johnson S.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Carter Scholz _ Oliveros_ Lion's.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Julie Kabat & Neil Rolnick _ Kaba.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Barton McLean _ A Little Night Mu.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Barton McLean _ Demons Of The Nig.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/I Am Sitting In A Room.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Medieval Purity In A Bed Of Thorn.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/With Fish Scales Scattered.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Contours, Clowns And Shadows.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Strings Of Token Strings (1984).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Nonet_ Computer Music In Four Tra.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Syntax.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Kaleidocycles.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/What Is The Use_.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Lady Neil's Dumpe.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Golem 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Arras, for 4 computer-synthesized.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Wings of Nike, for computer gI.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Wings of Nike, for computer gII.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Wings of Nike, for computer gIII.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Pacific, for 4 digital soundtrack I.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Pacific, for 4 digital soundtrack II.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Pacific, for 4 digital soundtrack III.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Pacific, for 4 digital soundtrack IV.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Cage_ Cartridge Music.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Leapday Night - Scene 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Leapday Night - Scene 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Leapday Night - Scene 3.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/A Traveller's Dream Journal - SetA.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/A Traveller's Dream Journal - SetB.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Interspecies Smalltalk - Part 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Interspecies Smalltalk - Part 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Mémoires Vives.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-01 Symphonie pour un homme seul -.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-02 Symphonie… - 2. Partita.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-03 Symphonie… - 3. Valse.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-04 Symphonie… - 4. Erotica.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-05 Symphonie… - 5. Scherzo.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-06 Symphonie… - 6. Collectif.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-07 Symphonie… - 7. Prosopopée II.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-08 Henry (P)_ Symphonie Pour Un Ho.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-09 Symphonie… - 9. Apostrophe.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-10 Symphonie… - 10. Intermezzo.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-11 Symphonie… - 11. Cadence.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/2-12 Symphonie… - 12. Strette.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Riverrun.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/01 Moins l'infini.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Instant 0.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Premières forces - Premières form.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 Lumière.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 Jeux de configurations.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 Échos_mélopée.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Cellules.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Aquatisme.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 Polyphonie.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 Expression 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/11 Expression 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/12 Réalité.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Wishart_ Vox 5.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Neptune's Children.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/On the Toon in the Toon on the Ty.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Dreel.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Final Times.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Shortstuff.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/ABZ_A.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Ghosts.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Lifting Bodies.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/01 Motion-Emotion.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Les Couleurs de la Nuit_ animé.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Les Couleurs de la Nuit_ plus ani.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 Les Couleurs de la Nuit_ trois an.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 Les Couleurs de la Nuit_ lune flo.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 Les Couleurs de la Nuit_ bouffées.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Les Couleurs de la Nuit_ nuit noi.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Les Couleurs de la Nuit_ nuit fau.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 Les Couleurs de la Nuit_ nuit bla.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 Les Couleurs de la Nuit_ nuit dén.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Bruno Degazio _ On Growth and For.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Eric Chasalow _ This Way Out.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Roberto Morales _ Nahual II.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Zack Settel _ Hok Pwah (excerpts).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Jean-Claude Risset _ Echo (for Jo.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Jonty Harrison _ ...et ainsi de s.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Paulution (Charnel Number Five).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Dripsody_ An Etude For Variable S.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Ninety-Nine Generators (1956).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Invocation (1957).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Burning Deck (Without Words).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Nocturne (1962).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Music For Expo (1967).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Safari_ Eine Kleine Klangfarbenme.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Sonic Contours.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Low Speed.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Invention In Twelve Tones.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Fantasy In Space.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Incantation.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Moonflight.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Piece For Tape Recorder.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Kolyosa.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Stereo Electronic Music No.2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Computer Piece No. 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Two Sketches For A Computer Piece I.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Two Sketches For A Computer Piece II.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Synchronisms No. 5.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/The Transformation Of Ani.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Octet I (1952_53) for Tape.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/01 Than Particle.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/02 Hornpipe.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/03 Mesa.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/04 Horn.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/05 Medium Size Mograph 1963.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/Rain Forest Version One.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/Sliding Pitches Inthe Rain Forest.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/01 Hpschd One.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/02 Hpschd Two.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/03 Hpschd Three.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/04 Hpschd Four.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/05 Hpschd Five.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/06 Hpschd Six.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/Live EM/07 Hpschd Seven.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Visages V - Part 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 Visages V - Part 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 Visages V - Part 3.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 Tête Et Queue Du Dragon - Part 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Tête Et Queue Du Dragon - Part 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Tautologos 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 Tautologos 2 - Part 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 Tautologos 2 - Part 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/11 Tautologos 2 - Part 3.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/12 Und So Weiter - Part 1.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/13 Und So Weiter - Part 2.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/14 Und So Weiter - Part 3.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/01 Oscillations.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Seagreen Serenades.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Lovefingers.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 Program.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 Velvet Cave.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 Whirly-Bird.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Dust.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Dancing Gods.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 Misty Mountain.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 You And I.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/11 Water.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/12 Ruby.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/13 Gypsy Love.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/14 You're Not Fooling Me.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/15 I Have Known Love.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/16 A Pox On You.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/17 Confusion.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/18 Fantasies.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-01 Shur, Op.15.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-02 Mithra, Op.90.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-03 Development 2, Op.24.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-04 East-West, Op.45.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-05 Chahargah 1, Op.75.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-06 Panoptikum 70, Op.27.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-07 Stratosphaere 1, Op.46.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/1-08 Yaad, Op.66.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/19 Shock Chords.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/18 The Wizard's Laboratory.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/17 Effervescence.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/16 Celestial Cantabile.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/15 Electrobuild.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/14 Electrostings.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/13 Nightwalker.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/12 Depression.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/11 No Man's Land.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 Liquid Energy (Rhythm Only).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 Liquid Energy.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Busy Microbes.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Plodding Power.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 Freeze Frame.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 The Pattern Emerges.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 Frontier Of Knowledge.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Computermatic.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Quest-Fast.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/01 Quest.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Williams Mix.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/23 Overture (Reprise).wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/22 The Homecoming.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/21 The Monster Pursues - Morbius Is.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/20 Come Back to Earth With Me.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/19 Battle With the Invisible Monster.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/18 Robby, the Cook, and 60 Gallons o.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/17 Nothing Like This Claw Found in N.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/16 Giant Footprints in the Sand.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/15 Krell Shuttle Ride and Power Stat.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/14 The Mind Booster - Creation Of Ma.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/13 Ancient Krell Music.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/12 Morbius' Study.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/11 Love At the Swimming Hole.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/10 Robby Arranges Flowers, Zaps Monk.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/09 An Invisible Monster Approaches.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/08 Robby, Make Me a Gown.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/07 Graveyard _ A Night With Two Moon.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/06 A Shangri-La in the Desert _ Gard.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/05 Flurry of Dust _ A Robot Approach.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/04 The Landing.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/03 Once Around Altair.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/02 Deceleration.wav",
    "/data/audio/mirdata/EMcorpus/PeterManning/01 Forbidden Planet (Main Title).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Tchaikovsky_ Valse Sentimentale.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Sala_ Concertando Rubato From Elektronische Tanzsuite.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Varèse_ Poem Electronique.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Maxfield_ Sine Music (A Swarm Of Butterfiles Encountered Over The Ocean).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Dockstader_ Apocalypse, Part 2.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Ussachevsky_ Wireless Fantasy.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/Babbit_ Philomel.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc1/MEV_ Spacecraft.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Reich_ Pendulum Music.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Yuasa_ Projection Esemplastic For White Noise.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Subotnik_ Silver Apples Of The Moon Part 1.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Tudor_ Rainforest Version 1.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Riley_ Poppy Nogood.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Czukay_ Boat-Woman-Song.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Ferrari_ Music Promenade.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Bayle_ Vibrations Composees - Rosace 3.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc2/Young_ Excerpt _31 _ 69 C.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/He Destroyed Her Image.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Six Fantasies On A Poem By Thomas Campion_ Her Song.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/En Phase_Hors Phase From Dedans Dehors.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/On The Other Ocean.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Stria.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Living Sound, Patent Pending Music For Sound-Joined Rooms Series.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Automatic Writing.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Canti Illuminati.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Music On A Long Thin Wire.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Melange.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Before And After Charm (La Notte).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Ohm/ohm_disc3/Unfamiliar Wind (Leeks Hills).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_1/Klangfiguren II, (1955_56).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_1/Essay, (1957_58).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_1/Terminus I, (1962).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_1/Terminus II, (1966_67).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_1/Output, (1979).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_2/Funktion Rot (1968).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_2/Funktion Grau (1969).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_2/Funktion Violett (1969).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_2/Funktion Blau (1969).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_2/Funktion Indigo (1969).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_3/Petite symphonie intuitive pour un paysage de printemps —1973.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_3/Strathoven —1985.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_3/Presque rien avec filles —1989.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_3/Hétérozygote —1963_64.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_4/Scambi.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_4/Trois visages de Liége (a) l'Air et l'eau.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_4/Trois visages de Liége (b) Voix de la Ville.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_4/Trois visages de Liége (c) Forges.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_4/Paraboles-mix.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_5/Aspekt.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_5/Cry of this earth.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_5/Apocalipsis cum figuris.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Klang Im Unbegrenzsten Raum.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Klangstudie I.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Klangstudie II.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Glockenspiel.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Komposition Nr. 5.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Komposition Nr. 7.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Formanten I - II.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Klangfiguren I.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Seismogramme I - III.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Doppelrohr II.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Incontri Di Fasce Sonore.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Glissandi.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Artikulation.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Interferenzen.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_6/Anepigraphe.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_7/Momeneti.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_7/Thema - Omaggio a Joyce.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_7/Visage.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_7/Le Rire.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_7/Invenzione Su Una Voce.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Points De Fuite.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Marime.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Cartographi Liminaire.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Un Certain Embarquement.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Theme De La Fuite.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Transfert I.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/En Abime.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Transfert Ii.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Palimpseste.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Il Ritorno.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_8/Espace _ Escape.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_9/Novars.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_9/Chiaroscuro.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_9/Météores.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Acousmatrix/Acousmatrix_9/Signé Dionysos.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Etude (Konkrete Musik).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Studie I (Elektronische Musik).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Studie II (Elektronische Musik).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Gesang Der Jünglinge (1955-56) (Elektronische Musik).wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur I.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur II.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur III.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur IV.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur IX.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur V.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur VI.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur VII.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur VIII.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur X.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XI.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XII.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii A.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii B.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii C.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii D.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii E.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur Xiii F.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XIV.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XV.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XVI A.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XVI B.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XVI C.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XVI D.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Stockhausen/Kontakte (1959-60)_ Struktur XVI E.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/World Rhythms.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/Bye Bye Butterfly.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/I Could Sit Here All Day.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/Points.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/New York Social Life.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Women in electronic music -1977/Time To Go.wav",
    "/data/audio/mirdata/EMcorpus/electroacoustic/Eliane Radigue/Transamorem-Transmortem/Transamorem - Transmortem.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Chariots Of Fire/Titles.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Chariots Of Fire/Five Circles.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Chariots Of Fire/Eric's Theme.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Chariots Of Fire/100 Metres.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Cantata #29, BWV 29, _Wir Danken Dir, Gott_ - Sinfonia.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Orchestral Suite #3 In D, BWV 1068 - Air _On The G String_.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ 2-Part Invention #8 In F, BWV 779.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ 2-Part Invention #14 In B Flat, BWV 785.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ 2-Part Invention #4 In D Minor, BWV 775.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Cantata #147, BWV 147, _Herz Und Mund Und Tat Und Leben_ - Jesu Bleibet Meine Freude.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Well-Tempered Clavier, Book 1 - Prelude & Fugue #7 In E Flat, BWV 852.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Well-Tempered Clavier, Book 1 - Prelude & Fugue #2 In C Minor, BWV 847.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Cantata #140, BWV 140, _Wachet Auf, Ruft Uns Die Stimme_ - Sleepers Awake.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Brandenburg Concerto #3 In G, BWV 1048 - 1. Allegro.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Brandenburg Concerto #3 In G, BWV 1048 - 2. Adagio.wav",
    "/data/audio/mirdata/EMcorpus/synthinstrumental/Switched-On Bach/Bach_ Brandenburg Concerto #3 In G, BWV 1048 - 3. Allegro.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Raymond Scott/Manhattan Research, Inc. [Disc 1]/Auto-Lite_ Spark Plugs.wav",
    "/data/audio/mirdata/EMcorpus/pioneers/Raymond Scott/Manhattan Research, I