@class UITargetedPreview, UIWindowSceneActivationRequestOptions, NSUserActivity;
@protocol _UIWindowSceneActivator;

@interface UIWindowSceneActivationConfiguration : NSObject <NSCopying>

@property (nonatomic, setter=_setAnimationSource:) unsigned long long _animationSource;
@property (weak, nonatomic, setter=_setSceneActivator:) id<_UIWindowSceneActivator> _sceneActivator;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) UIWindowSceneActivationRequestOptions *options;
@property (retain, nonatomic) UITargetedPreview *preview;

- (id)initWithUserActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
