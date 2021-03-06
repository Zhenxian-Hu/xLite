/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MeasurementControl_r6_IEs_H_
#define	_MeasurementControl_r6_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementIdentity.h"
#include "MeasurementCommand-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementReportingMode;
struct AdditionalMeasurementID_List;
struct DPCH_CompressedModeStatusInfo;

/* MeasurementControl-r6-IEs */
typedef struct MeasurementControl_r6_IEs {
	MeasurementIdentity_t	 measurementIdentity;
	MeasurementCommand_r6_t	 measurementCommand;
	struct MeasurementReportingMode	*measurementReportingMode	/* OPTIONAL */;
	struct AdditionalMeasurementID_List	*additionalMeasurementList	/* OPTIONAL */;
	struct DPCH_CompressedModeStatusInfo	*dpch_CompressedModeStatusInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReportingMode.h"
#include "AdditionalMeasurementID-List.h"
#include "DPCH-CompressedModeStatusInfo.h"

#endif	/* _MeasurementControl_r6_IEs_H_ */
#include <asn_internal.h>
