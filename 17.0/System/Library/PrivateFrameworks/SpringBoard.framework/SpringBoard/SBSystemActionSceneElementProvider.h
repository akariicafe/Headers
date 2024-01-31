@class UIColor, NSString, SBSystemApertureController, SBSystemAction, UIView, SBSystemApertureSceneElement;
@protocol SAElementIdentifying, SBSystemActionPreviewContextProviding, SAInvalidatable, SBUISystemApertureContentViewProviding;

@interface SBSystemActionSceneElementProvider : NSObject <SBSystemApertureSceneElementPlaceholderContentProviding, SBUISystemApertureContentViewContaining> {
    SBSystemApertureController *_systemApertureController;
    id<SBUISystemApertureContentViewProviding> _leadingPlaceholderContentViewProvider;
    id<SBUISystemApertureContentViewProviding> _trailingPlaceholderContentViewProvider;
    id<SBSystemActionPreviewContextProviding> _previewContext;
    id<SAElementIdentifying> _elementIdentification;
    id<SAInvalidatable> _elementAssertion;
    UIColor *_keyColor;
    SBSystemAction *_systemAction;
    SBSystemApertureSceneElement *_sceneElement;
}

@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicCompactContainerSize;

- (void).cxx_destruct;
- (void)preferredContentSizeDidInvalidateForContentViewProvider:(id)a0;
- (void)noteSceneClientWantsControlOfElementWithAssertionTransferBlock:(id /* block */)a0;

@end
