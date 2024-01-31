@class NSString;

@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (nonatomic) double distanceToTopOfIcons;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (nonatomic) unsigned long long searchHeaderBackgroundLayerRenderID;
@property (nonatomic) unsigned int searchHeaderBackgroundContextID;
@property (nonatomic) unsigned long long searchHeaderBlurLayerRenderID;
@property (nonatomic) unsigned int searchHeaderBlurContextID;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) double keyboardProtectorHeight;
@property (nonatomic, getter=isKeyboardPresented) BOOL keyboardPresented;
@property (nonatomic) struct CGSize { double x0; double x1; } searchBarSize;
@property (nonatomic) struct CGSize { double x0; double x1; } dockedSearchBarSize;
@property (nonatomic) double searchBarCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyDescriptionForSetting:(long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
