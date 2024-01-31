@class NSMutableArray;

@interface AWDWRMStreamingReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char counter : 1; unsigned char duration : 1; unsigned char durationLPM : 1; unsigned char durationOffline : 1; unsigned char numStall : 1; unsigned char samplePeriods : 1; unsigned char isEnd : 1; unsigned char lPM : 1; unsigned char offline : 1; unsigned char online : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSamplePeriods;
@property (nonatomic) unsigned int samplePeriods;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasIsEnd;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) BOOL hasNumStall;
@property (nonatomic) unsigned int numStall;
@property (nonatomic) BOOL hasLPM;
@property (nonatomic) BOOL lPM;
@property (nonatomic) BOOL hasOnline;
@property (nonatomic) BOOL online;
@property (nonatomic) BOOL hasOffline;
@property (nonatomic) BOOL offline;
@property (nonatomic) BOOL hasDurationLPM;
@property (nonatomic) unsigned int durationLPM;
@property (nonatomic) BOOL hasDurationOffline;
@property (nonatomic) unsigned int durationOffline;
@property (retain, nonatomic) NSMutableArray *instValues;
@property (nonatomic) BOOL hasCounter;
@property (nonatomic) unsigned int counter;

+ (Class)instValuesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearInstValues;
- (id)instValuesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addInstValues:(id)a0;
- (unsigned long long)instValuesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
