@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;
+ (id)sharedConfiguration;

- (int)userMode;
- (BOOL)isSupervised;
- (BOOL)isProvisionallyEnrolled;
- (id)language;
- (id)init;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isTeslaEnrolled;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)skipSetupKeys;
- (id)mdmVersionProtocol;
- (id)enrollmentAnchorCertificates;
- (id)languageScript;
- (id)diagnosticsUploadURL;
- (BOOL)isMDMUnremovable;
- (BOOL)alreadySignedIntoFaceTime;
- (id)region;
- (id)MAIDUsername;
- (id)enrollmentServerSupportedFeatures;
- (void).cxx_destruct;
- (id)tvProviderUserToken;
- (id)enrollmentServerInfo;
- (id)enrollmentServerURL;
- (BOOL)hasMAIDCredential;

@end
