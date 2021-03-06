??    V      ?     |      x  ?   y  ,   t  5   ?  N   ?  7   &	  \   ^	  _   ?	  `   
  u   |
  i   ?
  b   \  V   ?  ?     D   ?  %   ?          (  5   B  B   x     ?  w   ?     P     g     ?     ?  $   ?     ?     ?     
          #     4     =     \  #   j     ?     ?     ?     ?     ?     ?     ?  H   ?     G     a  !   ?     ?     ?     ?     ?  #   ?     !     ;  $   [     ?     ?  #   ?  2   ?           $     E     c     ?  *   ?  *   ?     ?            #   )  #   M  &   q     ?     ?  ,   ?     ?       -   !     O     ^     m     ?     ?     ?     ?     ?  ?  ?  ?   ?  3   ?  /     \   I  ;   ?  Z   ?  Y   =  b   ?  s   ?  s   n  _   ?  Y   B  ?   ?  ?     "   _     ?     ?  >   ?  N   ?     D  |   ]     ?     ?            %   3     Y     p     ?     ?     ?     ?  #   ?     ?  &   ?          4     <     E     ^     t     ?  K   ?     ?        ,         K      c      {   "   ?   %   ?      ?   $    !  )   %!  '   O!     w!  '   ?!  $   ?!     ?!  *   ?!     #"     B"     ]"  /   s"  /   ?"     ?"     ?"  
   #  +   #  +   <#  !   h#     ?#  #   ?#  3   ?#     ?#     $  .   ($     W$     c$     o$     ?$     ?$     ?$     ?$  "   ?$        T   =          	   1          H      7      D   (                 L       
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

 `e' command not supported `}' doesn't want any addresses can't find label for jump to `%s' cannot remove %s: %s cannot rename %s: %s cannot stat %s: %s command only uses one address comments don't accept any addresses couldn't attach to %s: %s couldn't edit %s: is a terminal couldn't edit %s: not a regular file couldn't follow symlink %s: %s couldn't open file %s: %s couldn't open temporary file %s: %s delimiter character is not a single-byte character error in subprocess expected \ after `a', `c' or `i' expected newer version of sed extra characters after command incomplete command invalid reference \%d on `s' command's RHS invalid usage of +N or ~N as first address invalid usage of line address 0 missing command multiple `!'s multiple `g' options to `s' command multiple `p' options to `s' command multiple number options to `s' command no input files no previous regular expression number option to `s' command may not be zero option `e' not supported read error on %s: %s strings for `y' command are different lengths unexpected `,' unexpected `}' unknown command: `%c' unknown option to `s' unmatched `{' unterminated `s' command unterminated `y' command unterminated address regex Project-Id-Version: sed 4.2.2
Report-Msgid-Bugs-To: bug-gnu-utils@gnu.org
POT-Creation-Date: 2017-02-03 17:17-0800
PO-Revision-Date: 2016-06-20 17:22+0200
Last-Translator: Johnny A. Solbu <johnny@solbu.net>
Language-Team: Norwegian Bokmaal <i18n-nb@lister.ping.uio.no>
Language: nb
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Poedit 1.8.7.1
 
Hvis ingen e, --expression, -f eller --file er gitt, blir det første
ikke-opsjonsargumentet tatt av sed-skriptet for å tolkes. Alle
gjenværende argumentene er navnene på inndatafiler; hvis ingen
inndatafiler angis leses standard inndata.

       --help     vis denne hjelpteksten og avslutt
       --version  vis programversjon og avslutt
   --follow-symlinks
                 Følg symbolske lenker ved prosessering «på stedet»
   --posix
                 deaktivere alle GNU-utvidelser.
   -R, --regexp-perl
                 Bruk Perl 5-syntaks for regulær uttrykk i skriptet.
   -b, --binary
                 åpne filer i binært (CR+LFs prosesseres ikke spesielt)
   -e script, --expression=script
                 legge skriptet til kommandoer som skal utføres
   -f script-file, --file=script-file
                 legge innholdet i skriptfil til kommandoer som skal utføres
   -i[SUFFIKS], --in-place[=SUFFIKS]
                 rediger filer «på stedet» (tar backup hvis SUFFIKS oppgis)
   -l N, --line-length=N
                 angi ønsket linjebrytingslengde for «l»-kommandoen
   -n, --quiet, --silent
                 undertrykk automatisk utskrift av mønsterplass
   -u, --unbuffered
                  last minimale mengder data fra inndatafiler og skyll
                  utdatabufferne oftere
   -z, --null-data
                 skille linjer ved NULL-tegn
 %s: -e uttrykk #%lu, tegn %lu: %s
 %s: kan ikke lese %s: %s
 %s: fil %s linje %lu: %s
 %s: advarsel: Klarte ikke å få sikkerhetskontekst med %s: %s %s: advarsel: klarte ikke å sette standard filopprettelseskontekst til %s: %s : ønsker ingen adresser GNU sed hjemmeside:. <http://www.gnu.org/software/sed/>
Generelt hjelp med GNU-programvare:. <http://www.gnu.org/gethelp/>.
 Ugyldig bak-referanse Ugyldig tegnklassenavn Ugyldig sorteringstegn Ugyldig bruk av \{\} Ugyldig foregående regulært uttrykk Ugyldig intervallslutt Ugyldig regulært uttrykk Jay Fenlason Ken Pizzini Minnet oppbrukt Ingen treff Intet foregående regulært uttrykk Paolo Bonzini For tidlig slutt på regulært uttrykk Regulært uttrykk for stort Suksess Tom Lord Etterfølgende backslash Ubalansert ( eller \( Ubalansert ) eller \) Ubalansert \{ Bruk: %s [VALG] ... {skript-bare-hvis-ingen-andre-skript} [inndatafil]...

 «e»-kommandoen støttes ikke `}' ønsker ingen adresser kan ikke finne etiketten for hopp til «%s» kan ikke fjerne %s: %s  Kan ikke omdøpe %s: %s kan ikke lese status på %s: %s kommandoen bruker bare én adresse kommentarer aksepterer ingen adresser kunne ikke koble til %s: %s Kan ikke redigere %s: er en terminal Kan ikke redigere %s: ikke en vanlig fil  kunne ikke følge symbolsk lenke %s: %s Kunne ikke åpne filen %s: %s Kunne ikke åpne midlertidig fil %s: %s skilletegn er ikke et enkeltbitstegn Feil i underprosessen forventet \ etter «a», «c» eller «i» forventet nyere versjon av sed ekstra tegn etter kommando ufullstendig kommando ugyldig referanse \%d på «s»-kommandoens RHS ugyldig bruk av +N eller ~N som første adresse ugyldig bruk av linjeadresse 0 kommandoen mangler flere `!'s flere «g»-alternativer til «s»-kommando flere «p»-alternativer til «s»-kommando flere tallvalg til «s»-kommando ingen inndatafiler Intet foregående regulært uttrykk tallvalget til «s»-kommandoen kan ikke være null «e»-valget støttes ikke lesefeil på fil %s: %s strenger for «y»-kommandoen er ulike lengder uventet `,' uventet `}' ukjent kommando: «%c» ukjent alternativ til «%s» ubalansert `{' uterminert «s»-kommando  uterminert «y»-kommando  uterminert regulært adresseuttryk 