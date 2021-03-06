# galera_cluster.inc
# ==================
#
# Description
# -----------
# Configure galera cluster with 2 nodes.
#

--let $galera_cluster_size = 2
--source include/galera_init.inc
--source include/have_innodb.inc
--source include/galera_wait_ready.inc

--connection node_2
--source include/galera_wait_ready.inc
--source include/have_innodb.inc

--connection node_1
