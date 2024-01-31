@class NSDictionary;

@interface MAAutoAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL userInitiated;
@property (nonatomic) long long waitForNewestSecs;
@property (nonatomic) BOOL interestAcrossTermination;
@property (nonatomic) BOOL lockAcrossTermination;
@property (nonatomic) BOOL lockAcrossReboot;
@property (nonatomic) BOOL lockAcrossOTAUpdate;
@property (nonatomic) BOOL lockInhibitsEmergencyRemoval;
@property (nonatomic) long long unlockAfterUsageSecs;
@property (nonatomic) long long preventGarbageCollectionSecs;
@property (retain, nonatomic) NSDictionary *additionalPolicyControl;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)newSummaryDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
