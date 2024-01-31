@class NSData, NSString, NSUserActivity;

@interface WFSiriUserActivityRequest : WFSiriActionRequest

@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUserActivityData:(id)a0 andBundleIdentifier:(id)a1;

@end
