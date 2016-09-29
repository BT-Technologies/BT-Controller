//Libreria para las conexiones y DEF
//©bt-tech (MX) 2016 (https://github.com/BT-Technologies/BT-Controller)
//parts of ©2013 CCL (http://ccl.sourceforge.net/)
#ifndef LIBBTCL_H
#define LIBBTCL_H

#endif // LIBBTCL_H
//
#include <time.h>
#include <qicon.h>
#define BCL_SUN		(1<<0) /** Sunday */
#define BCL_MON		(1<<1) /** Monday */
#define BCL_TUE		(1<<2) /** Tuesday */
#define BCL_WED		(1<<3) /** Wednesday */
#define BCL_THU		(1<<4) /** Thursday */
#define BCL_FRI		(1<<5) /** Friday */
#define BCL_SAT		(1<<6) /** Saturday */

enum
{
  /** Inactive status (no one is using it) */
  BCL_INACTIVE = 0,
  /** Active status (someone is using it) */
  BCL_ACTIVE,
  /** Paused status (someone was using it, but now it is suspended) */
  BCL_PAUSED
};

/* Data Categories */
enum
{
  BCL_DATA_NONE = 0,	      /** The data is assigned to nothing */
  BCL_DATA_CLIENT = -1,	      /** The data is assigned to a client */
  BCL_DATA_MEMBER = -2,	      /** The data is assigned to a member */
  BCL_DATA_TARIF = -3,	      /** The data is assigned to a tarif */
  BCL_DATA_PRODUCT = -4,      /** The data is assigned to a product */
  BCL_DATA_PRICE = -5,	      /** The data is assigned to a price */
  BCL_DATA_LOGSESSION = -6,   /** The data is assigned to a logged session */
  BCL_DATA_LOGPRODUCT = -7,   /** The data is assigned to a logged product */
  BCL_DATA_LOGEXPENSE = -8,   /** The data is assigned to a logged expense */
  BCL_DATA_EMPLOYEE = -9,     /** The data is assigned to an employee */
  BCL_DATA_USRLVL = -10,       /** The data is assigned to a user level */
  BCL_DATA_SETTINGS = -11     /** The data is assigned to settings */
};
