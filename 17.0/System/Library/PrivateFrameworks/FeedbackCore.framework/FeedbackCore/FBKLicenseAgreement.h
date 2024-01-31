@class NSAttributedString;

@interface FBKLicenseAgreement : NSObject

@property (class, readonly, nonatomic) NSAttributedString *currentLicenseAgreement;
@property (class, readonly, nonatomic) BOOL hasAgreedToCurrentLicenseAgreement;

+ (void)agreeToCurrentLicenseAgreement;

@end
