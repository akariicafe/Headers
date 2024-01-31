@class NSURL, NSArray, NSData;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) BOOL shouldBadge;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL entitledToForceLargeCard;
@property (retain, nonatomic) NSData *clientData;
@property (readonly, nonatomic) BOOL hasHitMaxViewCount;
@property (readonly, nonatomic) BOOL hasHitMaxLargeViewCount;

+ (id)activeItemFromEngagementRequest:(id)a0;
+ (id)convertEngagementRequestToDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)eventForKey:(id)a0;
- (BOOL)isTerminalStatus;
- (void)updateForRuleResult:(BOOL)a0;
- (void)updateWithDiscoveryItem:(id)a0;

@end
