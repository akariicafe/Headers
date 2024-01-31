@class NSDictionary;

@interface MCCloudConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;

- (BOOL)isSupervised;
- (BOOL)isProvisionallyEnrolled;
- (id)language;
- (id)provisionalEnrollmentExpirationDate;
- (BOOL)isTeslaEnrolled;
- (void)refreshDetailsFromDisk;
- (BOOL)isAwaitingConfiguration;
- (id)skipSetupKeys;
- (id)mdmVersionProtocol;
- (id)languageScript;
- (id)diagnosticsUploadURL;
- (BOOL)alreadySignedIntoFaceTime;
- (id)region;
- (id)MAIDUsername;
- (id)tvProviderUserToken;
- (BOOL)hasMAIDCredential;

@end
