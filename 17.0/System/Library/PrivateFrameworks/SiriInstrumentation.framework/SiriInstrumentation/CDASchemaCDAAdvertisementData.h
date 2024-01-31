@class NSData;

@interface CDASchemaCDAAdvertisementData : SISchemaInstrumentationMessage {
    struct { unsigned char audioHash : 1; unsigned char goodnessScore : 1; unsigned char confidenceScore : 1; unsigned char deviceClass : 1; unsigned char deviceGroup : 1; unsigned char productType : 1; unsigned char tieBreaker : 1; unsigned char isFromContextCollector : 1; unsigned char isSelf : 1; } _has;
}

@property (nonatomic) unsigned int audioHash;
@property (nonatomic) BOOL hasAudioHash;
@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) unsigned int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) unsigned int deviceGroup;
@property (nonatomic) BOOL hasDeviceGroup;
@property (nonatomic) unsigned int productType;
@property (nonatomic) BOOL hasProductType;
@property (nonatomic) unsigned int tieBreaker;
@property (nonatomic) BOOL hasTieBreaker;
@property (nonatomic) BOOL isFromContextCollector;
@property (nonatomic) BOOL hasIsFromContextCollector;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) BOOL hasIsSelf;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAudioHash;
- (void)deleteConfidenceScore;
- (void)deleteDeviceClass;
- (void)deleteDeviceGroup;
- (void)deleteGoodnessScore;
- (void)deleteIsFromContextCollector;
- (void)deleteIsSelf;
- (void)deleteProductType;
- (void)deleteTieBreaker;

@end
