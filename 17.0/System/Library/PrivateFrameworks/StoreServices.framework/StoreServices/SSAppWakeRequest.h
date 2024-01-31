@class NSString, NSDictionary;

@interface SSAppWakeRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSDictionary *launchOptions;
@property (nonatomic) BOOL shouldLaunchApp;
@property (copy, nonatomic) NSString *processAssertionIdentifier;
@property (nonatomic) double processAssertionInterval;
@property (copy, nonatomic) NSString *processAssertionReason;

+ (id)familyContentRemovalRequestWithAppIdentifier:(id)a0 accountPairs:(id)a1;
+ (id)newsstandFinishRequestWithAppIdentifier:(id)a0 issueIdentifiers:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
