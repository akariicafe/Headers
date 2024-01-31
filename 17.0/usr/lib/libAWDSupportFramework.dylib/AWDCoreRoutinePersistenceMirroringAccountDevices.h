@class NSMutableArray;

@interface AWDCoreRoutinePersistenceMirroringAccountDevices : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char topDeviceClass : 1; unsigned char totalPlaces : 1; unsigned char totalTransitions : 1; unsigned char totalVisits : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *profiles;
@property (nonatomic) BOOL hasTopDeviceClass;
@property (nonatomic) int topDeviceClass;
@property (nonatomic) BOOL hasTotalVisits;
@property (nonatomic) int totalVisits;
@property (nonatomic) BOOL hasTotalPlaces;
@property (nonatomic) int totalPlaces;
@property (nonatomic) BOOL hasTotalTransitions;
@property (nonatomic) int totalTransitions;

+ (Class)profilesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addProfiles:(id)a0;
- (void)clearProfiles;
- (id)profilesAtIndex:(unsigned long long)a0;
- (unsigned long long)profilesCount;

@end
