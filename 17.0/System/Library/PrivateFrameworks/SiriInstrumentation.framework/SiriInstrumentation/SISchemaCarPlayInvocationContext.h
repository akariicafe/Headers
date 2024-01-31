@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char directAction : 1; unsigned char enhancedVoiceTriggerMode : 1; unsigned char carPlayConnection : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) int directAction;
@property (nonatomic) BOOL hasDirectAction;
@property (nonatomic) int enhancedVoiceTriggerMode;
@property (nonatomic) BOOL hasEnhancedVoiceTriggerMode;
@property (nonatomic) int carPlayConnection;
@property (nonatomic) BOOL hasCarPlayConnection;
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
- (void)deleteBundleID;
- (void)deleteCarPlayConnection;
- (void)deleteDirectAction;
- (void)deleteEnhancedVoiceTriggerMode;

@end
