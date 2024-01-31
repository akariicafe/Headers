@class NSNumber;

@interface CLMiLoServiceMetaInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *numberOfClustersLearnedInModel;
@property (readonly, nonatomic) NSNumber *numberOfRecordingTriggersAtCurrentLocationOfInterest;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprints;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprintsLabeled;
@property (readonly, nonatomic) NSNumber *numberOfInputValidFingerprintsUnLabeled;
@property (readonly, nonatomic) NSNumber *numberOfFingerprintsBeforePruning;
@property (readonly, nonatomic) NSNumber *numberOfFingerprintsAfterPruning;
@property (readonly, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (readonly, nonatomic) NSNumber *numberOfBLESources;
@property (readonly, nonatomic) NSNumber *numberOfUWBSources;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumClustersLearnedInModel:(id)a0 numRecordingTriggersAtCurrentLOI:(id)a1 numInputValidFingerprints:(id)a2 numInputValidFingerprintsLabeled:(id)a3 numInputValidFingerprintsUnlabeled:(id)a4 numFingerprintsBeforePruning:(id)a5 numFingerprintsAfterPruning:(id)a6 numWiFiAccessPoints:(id)a7 numBLESources:(id)a8 numUWBSources:(id)a9;

@end
