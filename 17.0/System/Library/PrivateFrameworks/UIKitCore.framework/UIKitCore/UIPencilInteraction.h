@class NSString, UIView;
@protocol UIInteractionEffect, UIPencilInteractionDelegate;

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction>

@property (class, nonatomic, setter=_setPrefersPencilOnlyDrawing:) BOOL prefersPencilOnlyDrawing;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, nonatomic, setter=_setHasUsedPassivePencil:) BOOL hasUsedPassivePencil;
@property (class, readonly, nonatomic) long long preferredTapAction;

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) id<UIPencilInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)performDelegateDidTap;

@end
