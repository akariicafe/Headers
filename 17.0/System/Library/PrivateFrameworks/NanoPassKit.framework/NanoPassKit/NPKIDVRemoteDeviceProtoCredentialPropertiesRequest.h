@class NSString, NSMutableArray;

@interface NPKIDVRemoteDeviceProtoCredentialPropertiesRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers;

+ (Class)configuredPartitionsIdentifiersType;

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
- (void)addConfiguredPartitionsIdentifiers:(id)a0;
- (void)clearConfiguredPartitionsIdentifiers;
- (id)configuredPartitionsIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)configuredPartitionsIdentifiersCount;

@end
