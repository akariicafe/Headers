@class NSString, BCSCallerIdLocalizedString;

@interface BCSCallerIdMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) BOOL hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) BOOL hasCompanyId;
@property (retain, nonatomic) NSString *companyId;
@property (readonly, nonatomic) BOOL hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) BOOL hasLocationId;
@property (retain, nonatomic) NSString *locationId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) BCSCallerIdLocalizedString *name;
@property (readonly, nonatomic) BOOL hasLogoUrl;
@property (retain, nonatomic) NSString *logoUrl;
@property (nonatomic) BOOL hasIsVerified;
@property (nonatomic) BOOL isVerified;
@property (readonly, nonatomic) BOOL hasIntent;
@property (retain, nonatomic) BCSCallerIdLocalizedString *intent;
@property (readonly, nonatomic) BOOL hasConflatedMuid;
@property (retain, nonatomic) NSString *conflatedMuid;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
