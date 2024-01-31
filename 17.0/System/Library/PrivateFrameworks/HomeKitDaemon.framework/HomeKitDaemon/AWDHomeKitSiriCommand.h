@class NSString;

@interface AWDHomeKitSiriCommand : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionType : 1; unsigned char currentConfigurationVersion : 1; unsigned char duration : 1; unsigned char lastSyncedConfigurationVersion : 1; unsigned char numEntities : 1; unsigned char numFailures : 1; unsigned char numIncompleteOperations : 1; unsigned char outcome : 1; unsigned char serverConfigurationVersion : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasNumEntities;
@property (nonatomic) unsigned int numEntities;
@property (nonatomic) BOOL hasNumFailures;
@property (nonatomic) unsigned int numFailures;
@property (nonatomic) BOOL hasNumIncompleteOperations;
@property (nonatomic) unsigned int numIncompleteOperations;
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) unsigned int currentConfigurationVersion;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) unsigned int serverConfigurationVersion;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (retain, nonatomic) NSString *clientMetricIdentifier;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsActionType:(id)a0;
- (id)actionTypeAsString:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsOutcome:(id)a0;
- (id)outcomeAsString:(int)a0;

@end
