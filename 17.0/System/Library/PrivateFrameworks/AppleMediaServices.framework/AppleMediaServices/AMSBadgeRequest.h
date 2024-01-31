@class NSDictionary, NSString;

@interface AMSBadgeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *actionMetricsEvent;
@property (readonly, nonatomic) NSString *badgeIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSDictionary *metrics;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPushPayload:(id)a0;

@end
