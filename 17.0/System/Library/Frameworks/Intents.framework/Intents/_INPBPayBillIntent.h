@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBPaymentAmountValue, _INPBString, _INPBIntentMetadata, _INPBFinancialAccountValue;

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char billType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBBillPayeeValue *billPayee;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) int billType;
@property (nonatomic) BOOL hasBillType;
@property (retain, nonatomic) _INPBDateTimeRange *dueDate;
@property (readonly, nonatomic) BOOL hasDueDate;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (retain, nonatomic) _INPBString *transactionNote;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsBillType:(id)a0;
- (id)billTypeAsString:(int)a0;

@end
