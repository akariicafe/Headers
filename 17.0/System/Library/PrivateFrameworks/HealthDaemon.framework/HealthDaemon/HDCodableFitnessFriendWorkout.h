@class NSString, HDCodableSample, NSData;

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char amm : 1; unsigned char duration : 1; unsigned char goal : 1; unsigned char goalType : 1; unsigned char isIndoorWorkout : 1; unsigned char isWatchWorkout : 1; unsigned char totalBasalEnergyBurnedInCanonicalUnit : 1; unsigned char totalDistanceInCanonicalUnit : 1; unsigned char totalEnergyBurnedInCanonicalUnit : 1; unsigned char type : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) double goal;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasIsWatchWorkout;
@property (nonatomic) long long isWatchWorkout;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) long long isIndoorWorkout;
@property (readonly, nonatomic) BOOL hasDeviceManufacturer;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL hasAmm;
@property (nonatomic) long long amm;
@property (readonly, nonatomic) BOOL hasSeymourCatalogWorkoutIdentifier;
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier;
@property (readonly, nonatomic) BOOL hasSeymourMediaType;
@property (retain, nonatomic) NSString *seymourMediaType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyToObject:(id)a0;

@end
