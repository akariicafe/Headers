@class NSString, NSData;

@interface FLOWSchemaFLOWAppContext : SISchemaInstrumentationMessage {
    struct { unsigned char isSmartEnoughAppSelectionUsed : 1; unsigned char appResolutionType : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL hasAppVersion;
@property (nonatomic) BOOL isSmartEnoughAppSelectionUsed;
@property (nonatomic) BOOL hasIsSmartEnoughAppSelectionUsed;
@property (nonatomic) int appResolutionType;
@property (nonatomic) BOOL hasAppResolutionType;
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
- (void)deleteAppResolutionType;
- (void)deleteAppVersion;
- (void)deleteBundleId;
- (void)deleteIsSmartEnoughAppSelectionUsed;

@end
