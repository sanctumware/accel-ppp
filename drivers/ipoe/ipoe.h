#ifndef __LINUX_ISG_H
#define __LINUX_ISG_H

#include <linux/types.h>

enum {
	IPOE_CMD_NOOP,
	IPOE_CMD_CREATE,
	IPOE_CMD_DELETE,
	IPOE_CMD_ADD_NET,
	IPOE_CMD_DEL_NET,
	IPOE_REP_PKT,
	__IPOE_CMD_MAX,
};

#define IPOE_CMD_MAX			(__IPOE_CMD_MAX - 1)

enum {
	IPOE_ATTR_NONE,			 /* no data */
	IPOE_ATTR_ADDR,		   /* u32 */
	IPOE_ATTR_PEER_ADDR,	 /* u32 */
	IPOE_ATTR_IFNAME,	   /* u32 */
	IPOE_ATTR_HWADDR,	   /* u32 */
	IPOE_ATTR_MASK,	   /* u32 */
	IPOE_ATTR_PKT,	   /* u32 */
	IPOE_ATTR_ETH_HDR,	   /* u32 */
	IPOE_ATTR_IP_HDR,	   /* u32 */
	__IPOE_ATTR_MAX,
};

#define IPOE_ATTR_MAX			(__IPOE_ATTR_MAX - 1)

/*
 * NETLINK_GENERIC related info
 */
#define IPOE_GENL_NAME		  "IPoE"
#define IPOE_GENL_MCG_PKT		"Packet"
#define IPOE_GENL_VERSION	  0x1

#endif

