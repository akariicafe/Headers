@interface SCUpdateAppLaunchUpsellLastSeenDateCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ appLaunchUpsellLastSeenDate;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)executeWithZone:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
