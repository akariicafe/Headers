@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying> {
    struct { unsigned char eventTimestamp : 1; unsigned char timestamp : 1; unsigned char activeSeconds : 1; unsigned char age : 1; unsigned char biologicalSex : 1; unsigned char briskMinutes : 1; unsigned char energyBurned : 1; unsigned char energyBurnedGoal : 1; unsigned char height : 1; unsigned char weight : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) unsigned int energyBurned;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) BOOL hasActiveSeconds;
@property (nonatomic) unsigned int activeSeconds;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) unsigned int energyBurnedGoal;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) unsigned int biologicalSex;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) unsigned int age;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
