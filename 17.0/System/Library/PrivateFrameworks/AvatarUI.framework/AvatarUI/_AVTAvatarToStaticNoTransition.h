@protocol AVTAvatarTransitionModel;

@interface _AVTAvatarToStaticNoTransition : AVTTransition

@property (readonly, nonatomic) id<AVTAvatarTransitionModel> avatarTransitionModel;

- (id)model;
- (void).cxx_destruct;
- (void)performTransition;
- (id)initWithModel:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2 logger:(id)a3;

@end
