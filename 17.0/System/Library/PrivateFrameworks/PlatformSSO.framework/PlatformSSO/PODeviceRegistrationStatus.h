@class NSString;

@interface PODeviceRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPlatformSSOEnabled) BOOL platformSSOEnabled;
@property (retain, nonatomic) NSString *registeredExtensionName;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *registeredBundleIdentifier;
@property (nonatomic) long long deviceRegistrationStatus;
@property (nonatomic, getter=isActionButtonEnabled) BOOL actionButtonEnabled;
@property (nonatomic) long long actionButtonAction;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
