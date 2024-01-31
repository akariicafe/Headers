@class NSString, NSSet;

@interface SXCondition : SXJSONObject <SXCondition>

@property (readonly, nonatomic) double minViewportWidth;
@property (readonly, nonatomic) double maxViewportWidth;
@property (readonly, nonatomic) double minViewportAspectRatio;
@property (readonly, nonatomic) double maxViewportAspectRatio;
@property (readonly, nonatomic) NSString *minContentSizeCategory;
@property (readonly, nonatomic) NSString *maxContentSizeCategory;
@property (readonly, nonatomic) unsigned long long minColumns;
@property (readonly, nonatomic) unsigned long long maxColumns;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) NSString *viewLocation;
@property (readonly, nonatomic) NSString *minSpecVersion;
@property (readonly, nonatomic) NSString *maxSpecVersion;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;
@property (readonly, nonatomic) NSString *subscriptionStatus;
@property (readonly, nonatomic) unsigned long long testing;
@property (readonly, nonatomic) unsigned long long preferredColorScheme;
@property (readonly, nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (readonly, nonatomic) long long offerUpsellScenario;
@property (readonly, nonatomic) long long subscriptionActivationEligibility;
@property (readonly, nonatomic) NSString *configurationKey;
@property (readonly, nonatomic) NSString *app;
@property (readonly, nonatomic) NSSet *types;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;

- (id)contentSizeCategoryFromJSONContentSizeCategory:(id)a0;
- (long long)horizontalSizeClassWithValue:(id)a0 withType:(int)a1;
- (long long)interfaceSizeClassFromJSONSizeClass:(id)a0;
- (id)maxContentSizeCategoryWithValue:(id)a0 withType:(int)a1;
- (double)maxViewportAspectRatioWithValue:(id)a0 withType:(int)a1;
- (double)maxViewportWidthWithValue:(id)a0 withType:(int)a1;
- (id)minContentSizeCategoryWithValue:(id)a0 withType:(int)a1;
- (double)minViewportAspectRatioWithValue:(id)a0 withType:(int)a1;
- (double)minViewportWidthWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)newsletterSubscriptionStatusWithValue:(id)a0 withType:(int)a1;
- (long long)offerUpsellScenarioWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)preferredColorSchemeWithValue:(id)a0 withType:(int)a1;
- (long long)subscriptionActivationEligibilityWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)testingWithValue:(id)a0 withType:(int)a1;
- (long long)verticalSizeClassWithValue:(id)a0 withType:(int)a1;

@end
