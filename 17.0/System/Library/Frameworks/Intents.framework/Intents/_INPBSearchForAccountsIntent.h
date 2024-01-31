@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char accountType : 1; unsigned char requestedBalanceType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (readonly, nonatomic) BOOL hasAccountNickname;
@property (nonatomic) int accountType;
@property (nonatomic) BOOL hasAccountType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (nonatomic) int requestedBalanceType;
@property (nonatomic) BOOL hasRequestedBalanceType;
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
- (int)StringAsRequestedBalanceType:(id)a0;
- (id)accountTypeAsString:(int)a0;
- (id)requestedBalanceTypeAsString:(int)a0;

@end
