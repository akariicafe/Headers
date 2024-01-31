@class NSString;

@interface SPUISearchViewClientSceneSettings : UIApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (readonly) double distanceToTopOfIcons;
@property (readonly) unsigned long long searchHeaderLayerRenderID;
@property (readonly) unsigned int searchHeaderContextID;
@property (readonly) unsigned long long searchHeaderBackgroundLayerRenderID;
@property (readonly) unsigned int searchHeaderBackgroundContextID;
@property (readonly) double keyboardHeight;
@property (readonly) double keyboardProtectorHeight;
@property (readonly, getter=isKeyboardPresented) BOOL keyboardPresented;
@property (readonly) struct CGSize { double x0; double x1; } searchBarSize;
@property (readonly) struct CGSize { double x0; double x1; } dockedSearchBarSize;
@property (readonly) double searchBarCornerRadius;
@property (readonly) unsigned long long searchHeaderBlurLayerRenderID;
@property (readonly) unsigned int searchHeaderBlurContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyDescriptionForSetting:(long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
