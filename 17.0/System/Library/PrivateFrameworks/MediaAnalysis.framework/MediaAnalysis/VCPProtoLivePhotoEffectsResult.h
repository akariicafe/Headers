@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) unsigned long long loopSuggestionState;
@property (nonatomic) unsigned long long longExposureSuggestionState;
@property (readonly, nonatomic) BOOL hasRecipeBlob;
@property (retain, nonatomic) NSData *recipeBlob;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
