to dump:

drush sql-dump --gzip --result-file=../mysite.sql

to load:

drush @ausgovhack.dev ah-db-import --drop mysite.sql

tyo import:
drush prize-import
