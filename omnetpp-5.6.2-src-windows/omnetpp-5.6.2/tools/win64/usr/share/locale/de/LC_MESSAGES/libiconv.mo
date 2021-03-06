??    .      ?  =   ?      ?  C   ?  9   5  o   o  B   ?  m   "  ?   ?  \   ?  ;   -  P   i  [   ?       @     N   Z  J   ?  D   ?  d   9  ?   ?  :   9	     t	     ?	     ?	  0   ?	     ?	  5   ?	  	   
     
  )   2
  "   \
  1   
  +   ?
  &   ?
  A     ;   F     ?  /   ?  7   ?  3   ?  :   .  ;   i  $   ?     ?     ?            2   $  ?  W  ?   !  ?   ?  ?   ?  G   ?  ?   ?  v   ?  ^   ?  E   ^  |   ?  \   !     ~  S   ?  \   ?  W   2  D   ?  b   ?  ?   2  @   ?          5     >  C   ^     ?  >   ?     ?       6     &   T  )   {  ?   ?  (   _  G   ?  O   ?        1   5  =   g  @   ?  D   ?  G   +  0   s  2   ?  )   ?            Q   !             $                                    %         )                 ,                         +      !   	                '      "   (   .   -                  
                  #          &      *            --byte-subst=FORMATSTRING   substitution for unconvertible bytes
   --help                      display this help and exit
   --unicode-subst=FORMATSTRING
                              substitution for unconvertible Unicode characters
   --version                   output version information and exit
   --widechar-subst=FORMATSTRING
                              substitution for unconvertible wide characters
   -c                          discard unconvertible characters
   -f ENCODING, --from-code=ENCODING
                              the encoding of the input
   -l, --list                  list the supported encodings
   -s, --silent                suppress error messages about conversion problems
   -t ENCODING, --to-code=ENCODING
                              the encoding of the output
 %s %s argument: A format directive with a size is not allowed here. %s argument: A format directive with a variable precision is not allowed here. %s argument: A format directive with a variable width is not allowed here. %s argument: The character '%c' is not a valid conversion specifier. %s argument: The character that terminates the format directive is not a valid conversion specifier. %s argument: The format string consumes more than one argument: %u argument. %s argument: The format string consumes more than one argument: %u arguments. %s argument: The string ends in the middle of a directive. %s: I/O error %s:%u:%u %s:%u:%u: cannot convert %s:%u:%u: incomplete character or shift sequence (stdin) Converts text from one encoding to another encoding.
 I/O error Informative output:
 Options controlling conversion problems:
 Options controlling error output:
 Options controlling the input and output format:
 Report bugs to <bug-gnu-libiconv@gnu.org>.
 Try `%s --help' for more information.
 Usage: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...] Written by %s.
 cannot convert byte substitution to Unicode: %s cannot convert byte substitution to target encoding: %s cannot convert byte substitution to wide string: %s cannot convert unicode substitution to target encoding: %s cannot convert widechar substitution to target encoding: %s conversion from %s to %s unsupported conversion from %s unsupported conversion to %s unsupported or:    %s -l
 or:    iconv -l try '%s -l' to get the list of supported encodings Project-Id-Version: GNU libiconv 1.12
Report-Msgid-Bugs-To: bug-gnu-libiconv@gnu.org
POT-Creation-Date: 2011-08-07 15:24+0200
PO-Revision-Date: 2008-01-08 11:18+0200
Last-Translator: Bruno Haible <bruno@clisp.org>
Language-Team: German <translation-team-de@lists.sourceforge.net>
Language: de
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: KBabel 1.0.2
   --byte-subst=FORMATZEICHENKETTE
                              Ersatz f?r Bytes, die nicht umgewandelt werden
                                k?nnen
   --help                      diese Hilfe anzeigen und beenden
   --unicode-subst=FORMATZEICHENKETTE
                              Ersatz f?r Unicode-Zeichen, die nicht umgewandelt
                                werden k?nnen
   --version                   Versionsinformation anzeigen und beenden
   --widechar-subst=FORMATZEICHENKETTE
                              Ersatz f?r ?wide?-Zeichen, die nicht umgewandelt
                                werden k?nnen
   -c                          Zeichen, die nicht umgewandelt werden k?nnen,
                                wegwerfen
   -f KODIERUNG, --from-code=KODIERUNG
                              die Kodierung der Eingabe
   -l, --list                  die unterst?tzten Kodierungen anzeigen
   -s, --silent                Fehlermeldungen ?ber Probleme bei der Umwandlung
                                unterdr?cken
   -t KODIERUNG, --to-code=KODIERUNG
                              die Kodierung der Ausgabe
 %s ?%s?-Argument: Eine Formatierungsanweisung mit Gr??enangabe ist hier nicht erlaubt. ?%s?-Argument: Eine Formatierungsanweisung mit variabler Genauigkeit ist hier nicht erlaubt. ?%s?-Argument: Eine Formatierungsanweisung mit variabler Breite ist hier nicht erlaubt. ?%s?-Argument: Das Zeichen ?%c? bezeichnet keine g?ltige Umwandlung. ?%s?-Argument: Das Zeichen am Ende der Formatierungsanweisung bezeichnet keine g?ltige Umwandlung. ?%s?-Argument: Die Formatzeichenkette verbraucht mehr als ein Argument: %u Argument. ?%s?-Argument: Die Formatzeichenkette verbraucht mehr als ein Argument: %u Argumente. ?%s?-Argument: Die Zeichenkette endet mitten in einer Anweisung. %s: Ein-/Ausgabefehler %s:%u:%u %s:%u:%u: Kann nicht umwandeln. %s:%u:%u: unvollst?ndiges Zeichen oder unvollst?ndige Umschaltfolge (Standard-Eingabe) Wandelt Text von einer Kodierung in eine andere Kodierung um.
 Ein-/Ausgabefehler Informative Ausgabe:
 Optionen f?r die Behandlung von Umwandlungsproblemen:
 Optionen f?r die Ausgabe von Fehlern:
 Optionen f?r das Ein- und Ausgabeformat:
 Fehler bitte (auf Englisch, mit LC_ALL=C) an <bug-gnu-libiconv@gnu.org>
melden.
F?r die deutsche ?bersetzung ist die Mailingliste
<translation-team-de@lists.sourceforge.net> zust?ndig.
 ?%s --help? gibt weitere Informationen.
 Aufruf: %s [OPTION...] [-f KODIERUNG] [-t KODIERUNG] [EINBABEDATEI...]
 Aufruf: iconv [-c] [-s] [-f AUSGANGS-KODIERUNG] [-t ZIEL-KODIERUNG] [DATEI ...] Geschrieben von %s.
 Kann Byte-Ersatz nicht nach Unicode umwandeln: %s Kann den Byte-Ersatz nicht in die Zielkodierung umwandeln: %s Kann Byte-Ersatz nicht in eine ?wide?-Zeichenkette umwandeln: %s Kann Unicode-Zeichen-Ersatz nicht in die Zielkodierung umwandeln: %s Kann den ?wide?-Zeichen-Ersatz nicht in die Zielkodierung umwandeln: %s Umwandlung von %s nach %s ist nicht unterst?tzt. Umwandlung ausgehend von %s ist nicht unterst?tzt. Umwandlung nach %s ist nicht unterst?tzt. oder:   %s -l
 oder:   iconv -l Versuchen Sie ?%s -l?, um eine Liste aller unterst?tzten Kodierungen zu erhalten. 