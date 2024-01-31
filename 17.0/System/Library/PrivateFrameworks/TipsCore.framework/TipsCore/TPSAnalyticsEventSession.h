@interface TPSAnalyticsEventSession : TPSAnalyticsEvent

@property (readonly, nonatomic) long long collectionsViewed;
@property (readonly, nonatomic) long long tipsViewed;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithCollectionsViewed:(long long)a0 tipsViewed:(long long)a1;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCollectionsViewed:(long long)a0 tipsViewed:(long long)a1;

@end
