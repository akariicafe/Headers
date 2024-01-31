@class NSDictionary, NSString, SBAppLayout;

@interface SBMainDisplayLayoutState : SBLayoutState {
    SBAppLayout *_cachedAppLayoutIfAny;
    SBAppLayout *_cachedFloatingAppLayoutIfAny;
}

@property (readonly, nonatomic) BOOL effectivelyRepresentsHomeScreen;
@property (readonly, copy, nonatomic) NSDictionary *displayItemLayoutAttributesMap;
@property (readonly, nonatomic) BOOL isDisplayExternal;
@property (readonly, nonatomic) long long spaceConfiguration;
@property (readonly, nonatomic) BOOL isFullScreen;
@property (readonly, nonatomic) BOOL isSplitView;
@property (readonly, copy, nonatomic) NSDictionary *elementIdentifiersToLayoutAttributes;
@property (readonly, nonatomic) long long floatingConfiguration;
@property (readonly, nonatomic) long long centerConfiguration;
@property (readonly, nonatomic) long long peekConfiguration;
@property (readonly, nonatomic) long long unlockedEnvironmentMode;
@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose;
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible;
@property (readonly, nonatomic, getter=isCenterEntityModal) BOOL centerEntityModal;
@property (readonly, nonatomic) long long windowPickerRole;
@property (readonly, nonatomic) long long displayOrdinal;
@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier;

+ (id)_elementIdentifiersToLayoutAttributesForElements:(id)a0 spaceConfiguration:(long long)a1;

- (id)appLayout;
- (void)_applyElementInterfaceOrientationsToLayoutAttributes;
- (unsigned long long)hash;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2 spaceConfiguration:(long long)a3 elementIdentifiersToLayoutAttributes:(id)a4 floatingConfiguration:(long long)a5 unlockedEnvironmentMode:(long long)a6 floatingSwitcherVisible:(BOOL)a7 centerConfiguration:(long long)a8 centerEntityModal:(BOOL)a9 peekConfiguration:(long long)a10 bundleIDShowingAppExpose:(id)a11 windowPickerRole:(long long)a12 displayOrdinal:(long long)a13 isDisplayExternal:(BOOL)a14;
- (long long)_defaultInterfaceOrientation;
- (void)invalidateAppLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setInterfaceOrientationByLayoutElementIdentifier:(id)a0;
- (id)_initWithLayoutElements:(id)a0 spaceConfiguration:(long long)a1 elementIdentifiersToLayoutAttributes:(id)a2 floatingConfiguration:(long long)a3 unlockedEnvironmentMode:(long long)a4 floatingSwitcherVisible:(BOOL)a5 centerConfiguration:(long long)a6 centerEntityModal:(BOOL)a7 peekConfiguration:(long long)a8 bundleIDShowingAppExpose:(id)a9 windowPickerRole:(long long)a10 displayOrdinal:(long long)a11 isDisplayExternal:(BOOL)a12;
- (id)_initWithLayoutElements:(id)a0 spaceConfiguration:(long long)a1 floatingConfiguration:(long long)a2 unlockedEnvironmentMode:(long long)a3 floatingSwitcherVisible:(BOOL)a4 centerConfiguration:(long long)a5 centerEntityModal:(BOOL)a6 peekConfiguration:(long long)a7 bundleIDShowingAppExpose:(id)a8 windowPickerRole:(long long)a9 displayOrdinal:(long long)a10 isDisplayExternal:(BOOL)a11;
- (id)description;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4 unlockedEnvironmentMode:(long long)a5 floatingSwitcherVisible:(BOOL)a6 centerConfiguration:(long long)a7 centerEntityModal:(BOOL)a8 peekConfiguration:(long long)a9 bundleIDShowingAppExpose:(id)a10 windowPickerRole:(long long)a11 displayOrdinal:(long long)a12 isDisplayExternal:(BOOL)a13;
- (void).cxx_destruct;
- (id)_initWithLayoutState:(id)a0;
- (void)_updateSizingPoliciesForLayoutElements:(id)a0;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2;
- (void)invalidateFloatingAppLayout;
- (BOOL)isEqual:(id)a0;
- (id)layoutAttributesForElement:(id)a0;
- (void)_setLayoutAttributes:(id)a0 forLayoutElement:(id)a1;
- (id)floatingAppLayout;
- (id)_layoutAttributesForElementWithIdentifier:(id)a0;

@end
