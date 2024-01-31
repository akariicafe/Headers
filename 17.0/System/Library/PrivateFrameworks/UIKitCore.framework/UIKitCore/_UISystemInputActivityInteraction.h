@class UIWindowScene, NSString, UIView;
@protocol BSInvalidatable;

@interface _UISystemInputActivityInteraction : NSObject <UIInteraction>

@property (retain, nonatomic) id<BSInvalidatable> _systemInputActivityToken;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIWindowScene *_windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_teardown;
- (void)_updateSystemInputActivityIfNeeded;

@end
