@class NSString;

@interface ProximityAppleIDSetup.PASAccountContextExtension : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requiresCDP;
    void /* unknown type, empty encoding */ showPrivacyDisclosureOnSourceDevice;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
