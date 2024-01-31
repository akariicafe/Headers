@class NSString, HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject

@property (retain, nonatomic) HKClinicalSourceAuthorizationController *authorizationController;
@property (copy, nonatomic) NSString *readUsageDescription;
@property (copy, nonatomic) HKSource *source;

- (void).cxx_destruct;

@end
