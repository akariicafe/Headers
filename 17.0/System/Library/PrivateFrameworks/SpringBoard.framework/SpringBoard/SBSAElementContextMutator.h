@class NSString, SBSAElementContext, UIColor;

@interface SBSAElementContextMutator : NSObject

@property (readonly, nonatomic) SBSAElementContext *systemApertureElementContext;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } preferredEdgeOutsets;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=isCustomLayout) BOOL customLayout;
@property (nonatomic) long long systemApertureCustomLayout;
@property (nonatomic) long long systemApertureCustomLayoutCustomAnimationStyle;
@property (nonatomic) long long systemApertureLayoutCustomizingOptions;
@property (nonatomic) long long activeDynamicAnimation;
@property (copy, nonatomic) UIColor *keyColor;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSystemApertureElementContext:(id)a0;

@end
