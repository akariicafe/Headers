@class NSString, NSData;

@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage {
    struct { unsigned char assetVersion : 1; } _has;
}

@property (nonatomic) unsigned int assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSString *gestureModelVersion;
@property (nonatomic) BOOL hasGestureModelVersion;
@property (copy, nonatomic) NSString *audioModelVersion;
@property (nonatomic) BOOL hasAudioModelVersion;
@property (copy, nonatomic) NSString *policyModelVersion;
@property (nonatomic) BOOL hasPolicyModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetVersion;
- (void)deleteAudioModelVersion;
- (void)deleteGestureModelVersion;
- (void)deletePolicyModelVersion;

@end
