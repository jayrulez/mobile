#!/bin/sh

TIME=`date +%Y%m%d%H%M%S` 

echo "backup old table"
#mysqldump -uroot -p3e91eb88c2e115b0 db_ice >db_ice_${TIME}.sql
#mysqldump -uroot -p3e91eb88c2e115b0 db_taf >db_taf_${TIME}.sql
#mysqldump -uroot -p3e91eb88c2e115b0 db_taf_stat >db_taf_stat_${TIME}.sql
#mysqldump -uroot -p3e91eb88c2e115b0 db_system>db_system_${TIME}.sql
#mysqldump -uroot -p3e91eb88c2e115b0 db_config  >db_config_${TIME}.sql

echo "create new table"
mysql -uroot  -uroot -p3e91eb88c2e115b0  db_ice < db_ice.sql
mysql -uroot  -uroot -p3e91eb88c2e115b0  db_taf < db_taf.sql
mysql -uroot  -uroot -p3e91eb88c2e115b0  db_taf_stat < db_taf_stat.sql
mysql -uroot  -uroot -p3e91eb88c2e115b0  db_system < db_system.sql
mysql -uroot  -uroot -p3e91eb88c2e115b0  db_config < db_config.sql


