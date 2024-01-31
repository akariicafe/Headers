@class NSString, ASCodableCloudKitSample;

@interface ASCodableCloudKitWorkout : PBCodable <NSCopying> {
    struct { unsigned char amm : 1; unsigned char duration : 1; unsigned char goalInCanonicalUnit : 1; unsigned char goalType : 1; unsigned char totalBasalEnergyBurnedInCanonicalUnit : 1; unsigned char totalDistanceInCanonicalUnit : 1; unsigned char totalEnergyBurnedInCanonicalUnit : 1; unsigned char type : 1; unsigned char isIndoorWorkout : 1; unsigned char isWatchWorkout : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) ASCodableCloudKitSample *sample;
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
@property (nonatomic) BOOL hasGoalInCanonicalUnit;
@property (nonatomic) double goalInCanonicalUnit;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasIsWatchWorkout;
@property (nonatomic) BOOL isWatchWorkout;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL isIndoorWorkout;
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
- (BOOL)isAmm;

@end
