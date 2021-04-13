/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-v02.01-cl.asn"
 * 	`asn1c -D E2SM-KPM-v02.01-cl -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_CellObjectID_H_
#define	_CellObjectID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellObjectID */
typedef PrintableString_t	 CellObjectID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellObjectID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellObjectID;
asn_struct_free_f CellObjectID_free;
asn_struct_print_f CellObjectID_print;
asn_constr_check_f CellObjectID_constraint;
ber_type_decoder_f CellObjectID_decode_ber;
der_type_encoder_f CellObjectID_encode_der;
xer_type_decoder_f CellObjectID_decode_xer;
xer_type_encoder_f CellObjectID_encode_xer;
oer_type_decoder_f CellObjectID_decode_oer;
oer_type_encoder_f CellObjectID_encode_oer;
per_type_decoder_f CellObjectID_decode_uper;
per_type_encoder_f CellObjectID_encode_uper;
per_type_decoder_f CellObjectID_decode_aper;
per_type_encoder_f CellObjectID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellObjectID_H_ */
#include <asn_internal.h>
