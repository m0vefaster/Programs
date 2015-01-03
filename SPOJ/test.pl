
open(FILE, "WATER1.cpp") or die "Could not open file";

my @lines = <FILE> ;


for($i=0; $i<10;$i++)
   {
       print $lines[$i];
   }
