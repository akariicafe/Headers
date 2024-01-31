@class NSMutableArray;

@interface AWDHomeKitSiriSync : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char currentConfigurationVersion : 1; unsigned char duration : 1; unsigned char lastSyncedConfigurationVersion : 1; unsigned char serverConfigurationVersion : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *reasons;
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) unsigned int currentConfigurationVersion;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) unsigned int serverConfigurationVersion;

+ (Class)reasonsType;

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
- (void)addReasons:(id)a0;
- (id)reasonsAtIndex:(unsigned long long)a0;
- (void)clearReasons;
- (unsigned long long)reasonsCount;

@end
