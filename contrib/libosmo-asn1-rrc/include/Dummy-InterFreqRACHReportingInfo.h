/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Dummy_InterFreqRACHReportingInfo_H_
#define	_Dummy_InterFreqRACHReportingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Threshold.h"
#include "MaxReportedCellsOnRACHinterFreq.h"
#include "InterFreqRepQuantityRACH-FDD.h"
#include <constr_SEQUENCE.h>
#include "InterFreqRepQuantityRACH-TDDList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR {
	Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR_fdd,
	Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR_tdd,
	Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR_interFreqRACHReportingThreshold,
	Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR_maxReportedCellsOnRACHinterFreq
} Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR;

/* Dummy-InterFreqRACHReportingInfo */
typedef struct Dummy_InterFreqRACHReportingInfo {
	struct Dummy_InterFreqRACHReportingInfo__modeSpecificInfo {
		Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_PR present;
		union Dummy_InterFreqRACHReportingInfo__modeSpecificInfo_u {
			struct Dummy_InterFreqRACHReportingInfo__modeSpecificInfo__fdd {
				InterFreqRepQuantityRACH_FDD_t	 interFreqRepQuantityRACH_FDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct Dummy_InterFreqRACHReportingInfo__modeSpecificInfo__tdd {
				InterFreqRepQuantityRACH_TDDList_t	 interFreqRepQuantityRACH_TDDList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
			Threshold_t	 interFreqRACHReportingThreshold;
			MaxReportedCellsOnRACHinterFreq_t	 maxReportedCellsOnRACHinterFreq;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Dummy_InterFreqRACHReportingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Dummy_InterFreqRACHReportingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _Dummy_InterFreqRACHReportingInfo_H_ */
#include <asn_internal.h>
