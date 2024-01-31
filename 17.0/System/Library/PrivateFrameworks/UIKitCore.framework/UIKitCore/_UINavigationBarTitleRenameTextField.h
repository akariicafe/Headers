@class _UINavigationBarTitleRenamerSession, NSString, _UIPassthroughScrollInteraction, NSLayoutConstraint, FBSSceneIdentityToken;

@interface _UINavigationBarTitleRenameTextField : UITextField <_UIPassthroughScrollInteractionDelegate, _UINavigationBarTitleRenamerContentView>

@property (readonly, nonatomic) _UINavigationBarTitleRenamerSession *session;
@property (readonly, nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (retain, nonatomic, setter=_setLayeringSceneIdentity:) FBSSceneIdentityToken *_layeringSceneIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) double horizontalTextInset;
@property (copy, nonatomic) id /* block */ horizontalTextInsetDidChangeCallback;

- (id)initWithSession:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)_becomeFirstResponder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (void)didMoveToWindow;
- (BOOL)canResignFirstResponder;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (BOOL)supportsImagePaste;
- (void)_resignFirstResponder;
- (void)_setupIconViewIfNecessary;
- (BOOL)_shouldEndEditingOnReturn;

@end
