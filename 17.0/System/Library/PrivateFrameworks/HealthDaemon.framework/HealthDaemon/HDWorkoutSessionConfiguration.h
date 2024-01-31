@class NSUUID, HKWorkoutConfiguration, NSString, NSArray, HDHealthStoreClient;

@interface HDWorkoutSessionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) long long sessionType;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clientApplicationIdentifier;
@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion;
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) BOOL supports3rdPartyAOT;
@property (readonly, nonatomic) BOOL enableWorkoutChangeDetection;
@property (retain, nonatomic) NSArray *activityConfigurations;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 sessionType:(long long)a2 client:(id)a3 processBundleIdentifier:(id)a4 applicationIdentifier:(id)a5 requiresCoreLocationAssertion:(BOOL)a6 supportsAppRelaunchForRecovery:(BOOL)a7 supports3rdPartyAOT:(BOOL)a8 enableWorkoutChangeDetection:(BOOL)a9 activityConfigurations:(id)a10;

@end
