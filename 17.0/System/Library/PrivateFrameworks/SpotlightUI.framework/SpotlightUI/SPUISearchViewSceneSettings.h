@class NSString;

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (readonly, nonatomic) double revealProgress;
@property (readonly, nonatomic) unsigned long long presentationSource;
@property (readonly, nonatomic) unsigned long long presentationIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
