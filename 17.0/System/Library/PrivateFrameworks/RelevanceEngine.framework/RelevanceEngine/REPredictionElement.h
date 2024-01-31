@class NSString, NSArray;

@interface REPredictionElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long privacyBehavior;
@property (readonly, nonatomic) NSArray *relevanceProviders;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *interaction;
@property (retain, nonatomic) NSString *section;

+ (id)predictionElementFromElement:(id)a0;
+ (id)predictionElementWithIdentifier:(id)a0 relevanceProviders:(id)a1 bundleIdentifier:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
