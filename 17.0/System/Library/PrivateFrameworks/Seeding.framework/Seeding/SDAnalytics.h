@class NSUUID;

@interface SDAnalytics : NSObject

@property (class, readonly) NSUUID *deviceIdentifier;

+ (void)deviceDidDeclineLegalAgreement;
+ (void)deviceDidEnrollInSeeding;
+ (void)deviceDidUnenrollFromSeeding;

@end
