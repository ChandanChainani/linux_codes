#ifndef _CONFIG_DIST_H
#define _CONFIG_DIST_H
#ifdef CONFIG_DISTRIBUTION

#undef CONFG_SCSI
#define CONFIG_SCSI

#undef CONFIG_SCSI_AHA1542
#define CONFIG_SCSI_AHA1542
#undef CONFIG_SCSI_CSC
#define CONFIG_SCSI_CSC
#undef CONFIG_SCSI_DTC
#define CONFIG_SCSI_DTC
#undef CONFIG_SCSI_FUTURE_DOMAIN
#define CONFIG_SCSI_FUTURE_DOMAIN
#undef CONFIG_SCSI_SEAGATE
#define CONFIG_SCSI_SEAGATE
#undef CONFIG_SCSI_ULTRASTOR
#define CONFIG_SCSI_ULTRASTOR
#undef CONFIG_SCSI_7000FASST
#define CONFIG_SCSI_7000FASST

#undef CONFIG_BLK_DEV_HD
#define CONFIG_BLK_DEV_HD
#undef CONFIG_BLK_DEV_SD
#define CONFIG_BLK_DEV_SD
#undef CONFIG_BLK_DEV_ST
#define CONFIG_BLK_DEV_ST

#endif
#endif
