@class NSString, NSDate;

@interface HealthExposureNotificationUI.ENUIUserConsentStatus : NSObject {
    void /* unknown type, empty encoding */ textConsented;
    void /* unknown type, empty encoding */ versionConsented;
    void /* unknown type, empty encoding */ dateConsented;
}

@property (nonatomic, readonly) NSString *textConsented;
@property (nonatomic, readonly) NSString *versionConsented;
@property (nonatomic, readonly) NSDate *dateConsented;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTextConsented:(id)a0 versionConsented:(id)a1 dateConsented:(id)a2;

@end
