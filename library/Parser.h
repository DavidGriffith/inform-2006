! ------------------------------------------------------------------------------
!   PARSER:  Front end to parser.
!
!   Supplied for use with Inform 6                        Serial number 030901
!                                                                 Release 6/11
!   Copyright (c) Graham Nelson 1993-2003
!       but freely usable (see manuals)
!
!   In your game file, Include three library files in this order:
!       Include "Parser";
!       Include "VerbLib";
!       Include "Grammar";
! ------------------------------------------------------------------------------

System_file;

! ------------------------------------------------------------------------------

Constant LibSerial  = "031201";
Constant LibRelease = "6/11 beta";

Constant Grammar__Version = 2;

#Ifdef INFIX;       Default DEBUG 0; #Endif;

#Ifndef WORDSIZE;   ! compiling with Z-code only compiler
Constant TARGET_ZCODE;
Constant WORDSIZE 2;
#Endif;

#Ifndef VN_1610;
Message fatalerror "*** Library 6/11 needs Inform v6.10 or later to work ***";
#Endif; ! VN_

Include "linklpa";

Fake_Action LetGo;
Fake_Action Receive;
Fake_Action ThrownAt;
Fake_Action Order;
Fake_Action TheSame;
Fake_Action PluralFound;
Fake_Action ListMiscellany;
Fake_Action Miscellany;
Fake_Action Prompt;
Fake_Action NotUnderstood;

#Ifdef NO_PLACES;
Fake_Action Places;
Fake_Action Objects;
#Endif; ! NO_PLACES

! ------------------------------------------------------------------------------

[ Main; InformLibrary.play(); ];

! ------------------------------------------------------------------------------

#Ifdef USE_MODULES;
Link "parserm";
#Ifnot;
Include "parserm";
#Endif;

Constant LIBRARY_PARSER;        ! for dependency checking

! ==============================================================================
!
!   Changes for Library 6/11, Compiler 6.30
!   Roger Firth -- September 2003
!
!   1.  Normalization of bracing, tabs and #Ifdefs.
!
!   2.  Added Constant LIBRARY_PARSER.
!
!   3.  Updated LibSerial and LibRelease.
!
!   4.  Changed Ifndef DEBUG;Constant DEBUG;Endif to Default DEBUG 0.
!
! ==============================================================================
