/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 at Tue Oct 22 17:59:12 2019. */

#include "CryptoTransferTransactionBody.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t HederaAccountAmount_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, HederaAccountAmount, accountID, accountID, &HederaAccountID_fields),
    PB_FIELD(  2, SINT64  , SINGULAR, STATIC  , OTHER, HederaAccountAmount, amount, accountID, 0),
    PB_LAST_FIELD
};

const pb_field_t HederaTransferList_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, STATIC  , FIRST, HederaTransferList, accountAmounts, accountAmounts, &HederaAccountAmount_fields),
    PB_LAST_FIELD
};

const pb_field_t HederaCryptoTransferTransactionBody_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, HederaCryptoTransferTransactionBody, transfers, transfers, &HederaTransferList_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(HederaAccountAmount, accountID) < 65536 && pb_membersize(HederaTransferList, accountAmounts[0]) < 65536 && pb_membersize(HederaCryptoTransferTransactionBody, transfers) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_HederaAccountAmount_HederaTransferList_HederaCryptoTransferTransactionBody)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(HederaAccountAmount, accountID) < 256 && pb_membersize(HederaTransferList, accountAmounts[0]) < 256 && pb_membersize(HederaCryptoTransferTransactionBody, transfers) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_HederaAccountAmount_HederaTransferList_HederaCryptoTransferTransactionBody)
#endif


/* @@protoc_insertion_point(eof) */