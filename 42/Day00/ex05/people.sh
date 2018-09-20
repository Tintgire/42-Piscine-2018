 ldapsearch -LLL -x uid="z*" | grep cn: | sort -drf | sed "s/cn: //g"
