@class NSString, AVTAvatar, NSArray;

@interface AVTAvatarPoseAnimationController : NSObject <AVTAvatarPoseAnimationController> {
    AVTAvatar *_avatar;
    NSArray *_animationKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAvatar:(id)a0 animationKeys:(id)a1;
- (void)removeAnimationWithBlendOutDuration:(double)a0;

@end
