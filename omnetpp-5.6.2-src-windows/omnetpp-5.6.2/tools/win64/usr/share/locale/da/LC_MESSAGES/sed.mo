??    V      ?     |      x  ?   y  ,   t  5   ?  N   ?  7   &	  \   ^	  _   ?	  `   
  u   |
  i   ?
  b   \  V   ?  ?     D   ?  %   ?          (  5   B  B   x     ?  w   ?     P     g     ?     ?  $   ?     ?     ?     
          #     4     =     \  #   j     ?     ?     ?     ?     ?     ?     ?  H   ?     G     a  !   ?     ?     ?     ?     ?  #   ?     !     ;  $   [     ?     ?  #   ?  2   ?           $     E     c     ?  *   ?  *   ?     ?            #   )  #   M  &   q     ?     ?  ,   ?     ?       -   !     O     ^     m     ?     ?     ?     ?     ?  ?  ?     ?  ,   ?  7     Q   N  9   ?  [   ?  [   6  e   ?  r   ?  q   k  f   ?  V   D  ?   ?  >   %  $   d     ?     ?  <   ?  M   ?     J  ~   c     ?     ?          /  &   H     o     ?     ?     ?     ?     ?  #   ?               4     O     ]     f     ?     ?  
   ?  I   ?  "          #   &   >      e      |      ?   !   ?   "   ?      ?   &   !  ,   ?!  #   l!     ?!  '   ?!  (   ?!     ?!  %   "  "   8"     ["     v"  2   ?"  /   ?"     ?"     #  	   &#     0#     P#     p#     ?#  #   ?#  )   ?#  !   ?#     $  0   ($     Y$     e$     q$     ?$     ?$     ?$     ?$  '   ?$        T   =          	   1          H      7      D   (                 L       
   /   F   M           ?   G       '   <                     @      5   R      .   C                 B                     9                  :       "          !   K   4               N   0               -       U             A   *             P                      S   8       )       V   I   2          &   #          J   %   6   ;           Q   $   +   ,       E   >      3          O          
If no -e, --expression, -f, or --file option is given, then the first
non-option argument is taken as the sed script to interpret.  All
remaining arguments are names of input files; if no input files are
specified, then the standard input is read.

       --help     display this help and exit
       --version  output version information and exit
   --follow-symlinks
                 follow symlinks when processing in place
   --posix
                 disable all GNU extensions.
   -R, --regexp-perl
                 use Perl 5's regular expressions syntax in the script.
   -b, --binary
                 open files in binary mode (CR+LFs are not processed specially)
   -e script, --expression=script
                 add the script to the commands to be executed
   -f script-file, --file=script-file
                 add the contents of script-file to the commands to be executed
   -i[SUFFIX], --in-place[=SUFFIX]
                 edit files in place (makes backup if SUFFIX supplied)
   -l N, --line-length=N
                 specify the desired line-wrap length for the `l' command
   -n, --quiet, --silent
                 suppress automatic printing of pattern space
   -u, --unbuffered
                 load minimal amounts of data from the input files and flush
                 the output buffers more often
   -z, --null-data
                 separate lines by NUL characters
 %s: -e expression #%lu, char %lu: %s
 %s: can't read %s: %s
 %s: file %s line %lu: %s
 %s: warning: failed to get security context of %s: %s %s: warning: failed to set default file creation context to %s: %s : doesn't want any addresses GNU sed home page: <http://www.gnu.org/software/sed/>.
General help using GNU software: <http://www.gnu.org/gethelp/>.
 Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression Jay Fenlason Ken Pizzini Memory exhausted No match No previous regular expression Paolo Bonzini Premature end of regular expression Regular expression too big Success Tom Lord Trailing backslash Unmatched ( or \( Unmatched ) or \) Unmatched \{ Usage: %s [OPTION]... {script-only-if-no-other-script} [input-file]...

 `e' command not supported `}' doesn't want any addresses can't find label for jump to `%s' cannot remove %s: %s cannot rename %s: %s cannot stat %s: %s command only uses one address comments don't accept any addresses couldn't attach to %s: %s couldn't edit %s: is a terminal couldn't edit %s: not a regular file couldn't follow symlink %s: %s couldn't open file %s: %s couldn't open temporary file %s: %s delimiter character is not a single-byte character error in subprocess expected \ after `a', `c' or `i' expected newer version of sed extra characters after command incomplete command invalid reference \%d on `s' command's RHS invalid usage of +N or ~N as first address invalid usage of line address 0 missing command multiple `!'s multiple `g' options to `s' command multiple `p' options to `s' command multiple number options to `s' command no input files no previous regular expression number option to `s' command may not be zero option `e' not supported read error on %s: %s strings for `y' command are different lengths unexpected `,' unexpected `}' unknown command: `%c' unknown option to `s' unmatched `{' unterminated `s' command unterminated `y' command unterminated address regex Project-Id-Version: sed-4.2.2
Report-Msgid-Bugs-To: bug-gnu-utils@gnu.org
POT-Creation-Date: 2017-02-03 17:17-0800
PO-Revision-Date: 2016-10-15 19:06+0200
Last-Translator: Ask Hjorth Larsen <asklarsen@gmail.com>
Language-Team: Danish <dansk@dansk-gruppen.dk>
Language: da
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=n != 1;
 
Hvis der ikke er givet nogen af flagene -e, --expression, -f eller --file, så
vil første argument, der ikke er et flag, betragtes som et sed-script, der skal
fortolkes.  Alle resterende argumenter er navne på inddatafiler; hvis ingen
inddatafiler er angivet, læses standard-inddata.
       --help     vis denne hjælp og afslut
       --version  udskriv versionsinformation og afslut
   --follow-symlinks
                 følg symlænker når der redigeres i filer
   --posix
                 slå alle GNU-udvidelser fra.
   -R, --regexp-perl
                 brug Perl 5's syntaks for regulære udtryk i skriptet
   -b, --binary
                 åbn filer i binær tilstand (CR+LF specialbehandles ikke)
   -e script, --expression=script
                 tilføj scriptet til kommandoerne, der skal køres
   -f script-file, --file=scriptfil
                 føj indholdet af scriptfil til kommandoerne, der skal køres
   -i[SUFFIKS], --in-place[=SUFFIKS]
                 redigér filer (laver sikkerhedskopi hvis SUFFIKS er givet)
   -l N, --line-length=N
                 angiv ønsket længde for linjeombrydning til 'l'-kommandoen
   -n, --quiet, --silent
                 undertryk automatisk udskrift af mønsterrum
   -u, --unbuffered
                 indlæs minimale mængder af data fra inddatafilerne, og tøm
                 uddatabufferne oftere
   -z, --null-data
                 adskil linjer med NUL-tegn
 %s: -e udtryk nr. %lu, tegn %lu: %s
 %s: kan ikke læse %s: %s
 %s: fil %s, linje %lu: %s
 %s: advarsel: kunne ikke hente sikkerhedskontekst for %s: %s %s: advarsel: kunne ikke sætte standardkontekst for filoprettelse til %s: %s : vil ikke have adresser Hjemmeside for GNU sed: <http://www.gnu.org/software/sed/>.
Generel hjælp til GNU-programmer: <http://www.gnu.org/gethelp/>.
 Ugyldig reference bagud Ugyldigt navn på tegnklasse Ugyldigt sorteringstegn Ugyldigt indhold af \{\} Ugyldigt forudgående regulært udtryk Ugyldig slutning på område Ugyldigt regulært udtryk Jay Fenlason Ken Pizzini Hukommelsen opbrugt Intet resultat Intet forudgående regulært udtryk Paolo Bonzini Ufuldstændigt regulært udtryk Regulært udtryk for stort Godt resultat Tom Lord Afsluttende omvendt skråstreg Uparret ( eller \( Uparret ) eller \) Uparret \{ Brug: %s [FLAG]... {script-kun-hvis-intet-andet-script} [inddatafil]...

 'e'-kommando er ikke understøttet '}' vil ikke have adresser kan ikke finde etiket for hop til '%s' kan ikke fjerne %s: %s kan ikke omdøbe %s: %s kan ikke køre stat på %s: %s kommandoen bruger kun én adresse kommentarer vil ikke have adresser kunne ikke vedhæfte til %s: %s kunne ikke redigere %s: er en terminal kunne ikke redigere %s: ikke en regulær fil kunne ikke følge symlænken %s: %s kunne ikke åbne filen %s: %s kunne ikke åbne midlertidig fil %s: %s adskillelsestegn er ikke et en-byte-tegn fejl i underproces forventede \ efter 'a', 'c' eller 'i' forventede en nyere version af sed ekstra tegn efter kommando ufuldstændig kommando ugyldig reference \%d på 's'-kommandos højreside ugyldig brug af +N eller ~N som første adresse ugylig brug af linjeadresse 0 der mangler en kommando flere '!' flere 'g'-flag til 's'-kommando flere 'p'-flag til 's'-kommando flere tal-flag til 's'-kommando ingen inddatafiler intet forudgående regulært udtryk s-kommandoens tal-flag må ikke være nul tilvalg 'e' er ikke understøttet læsefejl på %s: %s 'y'-kommandoens strenge har forskellige længder uventet ',' uventet '}' ukendt kommando: '%c' ukendt flag til 's' uparret '{' uafsluttet 's'-kommando uafsluttet 'y'-kommando uafsluttet regulært udtryk for adresse 