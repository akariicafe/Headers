@class NSData;

@interface NSSProfileDataRespMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProfileData;
@property (retain, nonatomic) NSData *profileData;
@property (readonly, nonatomic) BOOL hasProfilePayloadsSummary;
@property (retain, nonatomic) NSData *profilePayloadsSummary;
@property (readonly, nonatomic) BOOL hasRmConfigurationViewModels;
@property (retain, nonatomic) NSData *rmConfigurationViewModels;

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
