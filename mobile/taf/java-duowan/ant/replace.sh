FILE=`grep qq *.xml | awk -F":" '{print $1}' |  sort  | uniq`
echo "$FILE" | while read line
do
 echo $line
 `sed -i "s/qq/duowan/g" $line`
done

