@interface UVPreviewSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } previewMaximumSize;
@property (readonly, nonatomic) long long previewSceneLayout;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeMutableCopy;

@end
