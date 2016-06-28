DELETE ALL
----------
 
CONTENTS OF THIS FILE
---------------------
 * Introduction
 * Requirements
 * Installation
 * Usage
 * Maintainers

INTRODUCTION
------------
This module is used to delete all content and/or users from a site.
This is mainly
a developer tool, which can come in handy in several cases, listed below.

The usual way to do this is to go to Administer -> Content then select all the
nodes and delete them. This works if you have a handful of nodes only. If you
have hundreds or thousands of nodes, then it is not a practical solution.

Another option is to directly delete the nodes from the node table in
the database. This does not work properly, since there are also comments,
and many tables for add on modules that needs to be cleaned.

This is a test site that the client was using for a period of time, and they
must clean it up before starting with real data.
You are testing something that creates a lot of nodes (e.g. aggregator), and
want to do it over and over again.
You created a site in the past and want to replicate it again,
but with new content.

Note that for nodes, comments and all additions to nodes that contributed
modules may have added. For users, any additional module data
will also be deleted.

REQUIREMENTS
------------
None.

INSTALLATION
------------
 * Install as usual,
 see https://www.drupal.org/documentation/install/modules-themes/modules-8
 for further information.

USAGE
-----

 * Drush
   ------
    drush delete-all
    Example: drush delete-all article

Drush on Drupal 7 version
-------------------------
Delete all nodes, nodes of a specific content type or users.

Examples:

 drush delete-all article             Delect all article nodes.
 drush delete-all all                 Delete nodes of all types.
 drush delete-all --reset             Delete nodes of all types, and reset node,
                                      revision and comment counters.
 drush delete-all users               Delete users.

Options:

 --reset                              Reset counter for node, revision and
                                      comment tables.
 --roles                              pick roles

Aliases: da

Drupal Admin

In order to use this module, install it it and enable it as with any other
module. You will then see two new entries, one under Administer -> Content,
and the other under Administer -> Users. A confirmation message will be
displayed before the actual deletion happens.

When deleting nodes, you can select to delete all nodes, or just delete
nodes by type.

There are also two methods for deleting nodes. The "normal" method uses
node_delete, and is the preferred way of doing things. But if your site has
hundreds or thousands of nodes, node_delete can take quite long. The "quick"
method is for these cases when there are thousands of nodes. It deletes
everything using SQL by joining the tables. Since it deletes thousands of
nodes at a time in a single sql statement and bypasses lots of php and the
module's hook_delete, it's much quicker. But it's not as safe a way of
deleting as using the "normal" method.

MAINTAINERS
-----------
 * Dipak Yadav (dipakmdhrm) - https://www.drupal.org/u/dipakmdhrm
 * Hammad Ghani (hammad-ghani) - https://www.drupal.org/u/hammad-ghani
 * Khalid Baheyeldin (kbahey) - https://www.drupal.org/u/kbahey
 * Brian Gilbert (realityloop) - https://www.drupal.org/u/realityloop
 * Kevin O'Brien (coderintherye) - https://www.drupal.org/u/coderintherye
 * Git Migration - https://www.drupal.org/u/git-migration
 * Doug Green (douggreen) - https://www.drupal.org/u/douggreen

