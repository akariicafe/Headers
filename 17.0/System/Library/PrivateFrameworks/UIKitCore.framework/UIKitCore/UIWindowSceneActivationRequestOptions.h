@class NSString, _UIWindowScenePlacement, UISceneConfiguration, UIWindowScenePlacement;

@interface UIWindowSceneActivationRequestOptions : UISceneActivationRequestOptions <NSCopying>

@property (copy, nonatomic, setter=_setInteractionIdentifier:) NSString *_interactionIdentifier;
@property (readonly, nonatomic) BOOL _effectivelyWantsProminence;
@property (readonly, nonatomic) BOOL _effectivelyWantsFullscreen;
@property (readonly, nonatomic) BOOL _effectivelyWantsPreservedLayout;
@property (readonly, nonatomic) BOOL _effectivelyWantsBackground;
@property (copy, nonatomic, setter=_setPlacement:) _UIWindowScenePlacement *_placement;
@property (retain, nonatomic, setter=_setQuickLookSceneConfiguration:) UISceneConfiguration *_quickLookSceneConfiguration;
@property (nonatomic, setter=_setPreferredSizeCategory:) unsigned long long _preferredSizeCategory;
@property (nonatomic, setter=_setPreserveLayout:) BOOL _preserveLayout;
@property (nonatomic) unsigned long long preferredPresentationStyle;
@property (copy, nonatomic) UIWindowScenePlacement *placement;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
