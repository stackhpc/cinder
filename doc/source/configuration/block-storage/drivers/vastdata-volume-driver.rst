==========================
VAST Data Volume Driver
==========================

The VAST Data Volume driver integrates OpenStack
with VAST Data's Storage System.
Volumes in the Block Storage service are backed
by VAST's NVMe storage and are accessed using VAST's API.

This documentation explains how to configure and connect
the Block Storage nodes to the VAST Data storage system.

Driver options
~~~~~~~~~~~~~~

.. include:: ../../tables/cinder-vastdata.inc

Supported operations
~~~~~~~~~~~~~~~~~~~~

- Create, list, delete, attach (map), and detach (unmap) volumes.
- Create, list and delete volume snapshots.
- Create a volume from a snapshot.
- Clone a volume.
- Extend a volume.

Configuring the VAST Data Backend
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This section details the steps required
to configure the VAST Data storage driver for Cinder.

#. In the ``cinder.conf`` configuration file under the ``[DEFAULT]``
   section, set the `enabled_backends` parameter.

   .. code-block:: ini

      [DEFAULT]
      enabled_backends = vast

#. Add a backend group section
   for the backend group specified in the `enabled_backends` parameter.

#. In the newly created backend group section,
   set the following configuration options:

   .. code-block:: ini

      [vast]
      # The driver path
      volume_driver = cinder.volume.drivers.vastdata.driver.VASTVolumeDriver
      # Management IP of the VAST storage system
      san_ip = {vms_ip}
      # Management API port of the VAST storage system
      san_api_port = {vms_port}
      # Management username of the VAST storage system
      san_login = {mgmt_user}
      # Management password of the VAST storage system
      san_password = {mgmt_password}
      # API token for accessing VAST mgmt. If provided, it will be used instead of 'vast_mgmt_user' and 'vast_mgmt_password'.
      vast_api_token = {vast_api_token}
      # Virtual IP Pool for NVMe connections
      vast_vippool_name = {vip_pool}
      # Subsystem for NVMe
      vast_subsystem = {subsystem}
      # Tenant name – required for additional filtering when multiple subsystems share the same name.
      vast_tenant_name = {tenant_name}
      # Backend name
      volume_backend_name = vast

#. Restart the cinder-volume service
   for the configuration changes to take effect.
