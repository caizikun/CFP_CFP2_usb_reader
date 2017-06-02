/*******************************************************************************
* File Name: MOD_RST.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MOD_RST_H) /* Pins MOD_RST_H */
#define CY_PINS_MOD_RST_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MOD_RST_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MOD_RST__PORT == 15 && ((MOD_RST__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MOD_RST_Write(uint8 value);
void    MOD_RST_SetDriveMode(uint8 mode);
uint8   MOD_RST_ReadDataReg(void);
uint8   MOD_RST_Read(void);
void    MOD_RST_SetInterruptMode(uint16 position, uint16 mode);
uint8   MOD_RST_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MOD_RST_SetDriveMode() function.
     *  @{
     */
        #define MOD_RST_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MOD_RST_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MOD_RST_DM_RES_UP          PIN_DM_RES_UP
        #define MOD_RST_DM_RES_DWN         PIN_DM_RES_DWN
        #define MOD_RST_DM_OD_LO           PIN_DM_OD_LO
        #define MOD_RST_DM_OD_HI           PIN_DM_OD_HI
        #define MOD_RST_DM_STRONG          PIN_DM_STRONG
        #define MOD_RST_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MOD_RST_MASK               MOD_RST__MASK
#define MOD_RST_SHIFT              MOD_RST__SHIFT
#define MOD_RST_WIDTH              1u

/* Interrupt constants */
#if defined(MOD_RST__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MOD_RST_SetInterruptMode() function.
     *  @{
     */
        #define MOD_RST_INTR_NONE      (uint16)(0x0000u)
        #define MOD_RST_INTR_RISING    (uint16)(0x0001u)
        #define MOD_RST_INTR_FALLING   (uint16)(0x0002u)
        #define MOD_RST_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MOD_RST_INTR_MASK      (0x01u) 
#endif /* (MOD_RST__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MOD_RST_PS                     (* (reg8 *) MOD_RST__PS)
/* Data Register */
#define MOD_RST_DR                     (* (reg8 *) MOD_RST__DR)
/* Port Number */
#define MOD_RST_PRT_NUM                (* (reg8 *) MOD_RST__PRT) 
/* Connect to Analog Globals */                                                  
#define MOD_RST_AG                     (* (reg8 *) MOD_RST__AG)                       
/* Analog MUX bux enable */
#define MOD_RST_AMUX                   (* (reg8 *) MOD_RST__AMUX) 
/* Bidirectional Enable */                                                        
#define MOD_RST_BIE                    (* (reg8 *) MOD_RST__BIE)
/* Bit-mask for Aliased Register Access */
#define MOD_RST_BIT_MASK               (* (reg8 *) MOD_RST__BIT_MASK)
/* Bypass Enable */
#define MOD_RST_BYP                    (* (reg8 *) MOD_RST__BYP)
/* Port wide control signals */                                                   
#define MOD_RST_CTL                    (* (reg8 *) MOD_RST__CTL)
/* Drive Modes */
#define MOD_RST_DM0                    (* (reg8 *) MOD_RST__DM0) 
#define MOD_RST_DM1                    (* (reg8 *) MOD_RST__DM1)
#define MOD_RST_DM2                    (* (reg8 *) MOD_RST__DM2) 
/* Input Buffer Disable Override */
#define MOD_RST_INP_DIS                (* (reg8 *) MOD_RST__INP_DIS)
/* LCD Common or Segment Drive */
#define MOD_RST_LCD_COM_SEG            (* (reg8 *) MOD_RST__LCD_COM_SEG)
/* Enable Segment LCD */
#define MOD_RST_LCD_EN                 (* (reg8 *) MOD_RST__LCD_EN)
/* Slew Rate Control */
#define MOD_RST_SLW                    (* (reg8 *) MOD_RST__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MOD_RST_PRTDSI__CAPS_SEL       (* (reg8 *) MOD_RST__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MOD_RST_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MOD_RST__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MOD_RST_PRTDSI__OE_SEL0        (* (reg8 *) MOD_RST__PRTDSI__OE_SEL0) 
#define MOD_RST_PRTDSI__OE_SEL1        (* (reg8 *) MOD_RST__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MOD_RST_PRTDSI__OUT_SEL0       (* (reg8 *) MOD_RST__PRTDSI__OUT_SEL0) 
#define MOD_RST_PRTDSI__OUT_SEL1       (* (reg8 *) MOD_RST__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MOD_RST_PRTDSI__SYNC_OUT       (* (reg8 *) MOD_RST__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MOD_RST__SIO_CFG)
    #define MOD_RST_SIO_HYST_EN        (* (reg8 *) MOD_RST__SIO_HYST_EN)
    #define MOD_RST_SIO_REG_HIFREQ     (* (reg8 *) MOD_RST__SIO_REG_HIFREQ)
    #define MOD_RST_SIO_CFG            (* (reg8 *) MOD_RST__SIO_CFG)
    #define MOD_RST_SIO_DIFF           (* (reg8 *) MOD_RST__SIO_DIFF)
#endif /* (MOD_RST__SIO_CFG) */

/* Interrupt Registers */
#if defined(MOD_RST__INTSTAT)
    #define MOD_RST_INTSTAT            (* (reg8 *) MOD_RST__INTSTAT)
    #define MOD_RST_SNAP               (* (reg8 *) MOD_RST__SNAP)
    
	#define MOD_RST_0_INTTYPE_REG 		(* (reg8 *) MOD_RST__0__INTTYPE)
#endif /* (MOD_RST__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MOD_RST_H */


/* [] END OF FILE */
