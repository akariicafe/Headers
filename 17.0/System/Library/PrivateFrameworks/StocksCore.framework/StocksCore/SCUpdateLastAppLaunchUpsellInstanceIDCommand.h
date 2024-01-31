@interface SCUpdateLastAppLaunchUpsellInstanceIDCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ lastAppLaunchUpsellInstanceID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)executeWithZone:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
