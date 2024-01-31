@class UIWindowScene, NSString, UIView;
@protocol UIInteractionEffect, BSInvalidatable;

@interface _UISearchParticipantInteraction : NSObject <UIInteraction_Private, UIInteraction>

@property (retain, nonatomic) id<BSInvalidatable> _searchParticipantToken;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIWindowScene *_windowScene;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
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
- (void)_updateActiveSearchParticipationIfNeeded;

@end
