@class NSString, NSArray;

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *eligibleContext;
@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) unsigned long long usageFlags;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithContentID:(id)a0 bundleID:(id)a1 eligibleContext:(id)a2 displayType:(unsigned long long)a3 usageFlags:(unsigned long long)a4 date:(id)a5;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentID:(id)a0 bundleID:(id)a1 eligibleContext:(id)a2 displayType:(unsigned long long)a3 usageFlags:(unsigned long long)a4 date:(id)a5;
- (id)duetEvent;

@end
