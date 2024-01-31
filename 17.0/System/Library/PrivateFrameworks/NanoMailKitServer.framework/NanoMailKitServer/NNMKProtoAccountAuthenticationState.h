@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {
    struct { unsigned char standaloneState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) BOOL hasStandaloneState;
@property (nonatomic) unsigned int standaloneState;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSubsectionId;
@property (retain, nonatomic) NSString *subsectionId;
@property (readonly, nonatomic) BOOL hasEmailAddressToken;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (readonly, nonatomic) BOOL hasPccEmailAddress;
@property (retain, nonatomic) NSString *pccEmailAddress;

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
