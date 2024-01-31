@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <_INPBFinancialAccountValue, NSSecureCoding, NSCopying> {
    struct { unsigned char accountType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (readonly, nonatomic) BOOL hasAccountNickname;
@property (copy, nonatomic) NSString *accountNumber;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (nonatomic) int accountType;
@property (nonatomic) BOOL hasAccountType;
@property (retain, nonatomic) _INPBBalanceAmountValue *balance;
@property (readonly, nonatomic) BOOL hasBalance;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property (readonly, nonatomic) BOOL hasSecondaryBalance;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
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
- (int)StringAsAccountType:(id)a0;
- (id)accountTypeAsString:(int)a0;

@end
