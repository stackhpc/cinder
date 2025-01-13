.. _cinder-vastdata:

.. list-table:: Description of VAST Data volume driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``san_ip`` = ``None``
     - (String) Management IP of the VAST storage system. This is a required field.
   * - ``san_api_port`` = ``443``
     - (Integer) Management API port of the VAST storage system. Default is 443.
   * - ``san_login`` = ``admin``
     - (String) Management username of the VAST storage system.
   * - ``san_password`` = ``None``
     - (String) Management password of the VAST storage system.
   * - ``vast_api_token`` = ``None``
     - (String) API token for accessing VAST mgmt. f provided, it will be used instead of san_login and san_password.
   * - ``vast_vippool_name`` = ``None``
     - (String) Name of the Virtual IP Pool for NVMe target discovery.
   * - ``vast_subsystem`` = ``None``
     - (String) VAST subsystem name used for identifying the NVMe subsystem.
   * - ``vast_tenant_name`` = ``None``
     - (String) VAST Tenant name – required for additional filtering when multiple subsystems share the same name.
   * - ``vast_volume_prefix`` = ``openstack-vol-``
     - (String) Prefix for all newly created volumes.
   * - ``vast_snapshot_prefix`` = ``openstack-snap-``
     - (String) Prefix for all newly created snapshots.

