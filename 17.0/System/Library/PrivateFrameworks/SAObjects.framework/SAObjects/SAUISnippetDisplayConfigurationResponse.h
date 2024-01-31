@class NSString, SAUISize;

@interface SAUISnippetDisplayConfigurationResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL accessibilityDifferentiateWithoutColor;
@property (nonatomic) BOOL accessibilityInvertColors;
@property (nonatomic) BOOL accessibilityReduceMotion;
@property (nonatomic) BOOL accessibilityReduceTransparency;
@property (copy, nonatomic) NSString *displayColorScheme;
@property (copy, nonatomic) NSString *displayContrast;
@property (copy, nonatomic) NSString *displayGamut;
@property (copy, nonatomic) NSString *dynamicTypeSize;
@property (retain, nonatomic) SAUISize *estimatedVisibleSnippetDisplaySize;
@property (copy, nonatomic) NSString *textDirection;
@property (copy, nonatomic) NSString *textLegibilityWeight;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
