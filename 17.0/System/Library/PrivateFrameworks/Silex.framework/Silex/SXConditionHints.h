@class NSString;

@interface SXConditionHints : SXJSONObject <SXConditionHints>

@property (readonly, nonatomic) long long minViewportWidth;
@property (readonly, nonatomic) long long maxViewportWidth;
@property (readonly, nonatomic) long long minViewportAspectRatio;
@property (readonly, nonatomic) long long maxViewportAspectRatio;
@property (readonly, nonatomic) long long minContentSizeCategory;
@property (readonly, nonatomic) long long maxContentSizeCategory;
@property (readonly, nonatomic) long long minColumns;
@property (readonly, nonatomic) long long maxColumns;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long viewLocation;
@property (readonly, nonatomic) long long minSpecVersion;
@property (readonly, nonatomic) long long maxSpecVersion;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;
@property (readonly, nonatomic) long long subscriptionStatus;
@property (readonly, nonatomic) long long testing;
@property (readonly, nonatomic) long long preferredColorScheme;
@property (readonly, nonatomic) long long newsletter;
@property (readonly, nonatomic) long long upsellScenario;
@property (readonly, nonatomic) long long subscriptionActivationEligibility;
@property (readonly, nonatomic) long long configurationKey;
@property (readonly, nonatomic) long long app;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;

- (long long)viewLocationWithValue:(id)a0 withType:(int)a1;
- (long long)appWithValue:(id)a0 withType:(int)a1;
- (long long)configurationKeyWithValue:(id)a0 withType:(int)a1;
- (long long)horizontalSizeClassWithValue:(id)a0 withType:(int)a1;
- (long long)maxColumnsWithValue:(id)a0 withType:(int)a1;
- (long long)maxContentSizeCategoryWithValue:(id)a0 withType:(int)a1;
- (long long)maxSpecVersionWithValue:(id)a0 withType:(int)a1;
- (long long)maxViewportAspectRatioWithValue:(id)a0 withType:(int)a1;
- (long long)maxViewportWidthWithValue:(id)a0 withType:(int)a1;
- (long long)minColumnsWithValue:(id)a0 withType:(int)a1;
- (long long)minContentSizeCategoryWithValue:(id)a0 withType:(int)a1;
- (long long)minSpecVersionWithValue:(id)a0 withType:(int)a1;
- (long long)minViewportAspectRatioWithValue:(id)a0 withType:(int)a1;
- (long long)minViewportWidthWithValue:(id)a0 withType:(int)a1;
- (long long)newsletterWithValue:(id)a0 withType:(int)a1;
- (long long)platformWithValue:(id)a0 withType:(int)a1;
- (long long)preferredColorSchemeWithValue:(id)a0 withType:(int)a1;
- (long long)subscriptionActivationEligibilityWithValue:(id)a0 withType:(int)a1;
- (long long)subscriptionStatusWithValue:(id)a0 withType:(int)a1;
- (long long)ternaryValueForJSONValue:(id)a0 type:(int)a1;
- (long long)testingWithValue:(id)a0 withType:(int)a1;
- (long long)upsellScenarioWithValue:(id)a0 withType:(int)a1;
- (long long)verticalSizeClassWithValue:(id)a0 withType:(int)a1;

@end
