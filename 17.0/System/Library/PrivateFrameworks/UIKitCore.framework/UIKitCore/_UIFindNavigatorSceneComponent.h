@class _UIFindNavigatorViewController, NSString, _UIFindNavigatorResponder, UIScene;

@interface _UIFindNavigatorSceneComponent : NSObject <_UIFindNavigatorViewControllerDelegate, _UIViewSubtreeMonitor, _UISceneComponentProviding, _UIFindNavigatorHosting>

@property (retain, nonatomic) _UIFindNavigatorResponder *findNavigatorResponder;
@property (retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;

+ (id)sceneComponentForView:(id)a0;

- (void)_monitoredView:(id)a0 willMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (void)_monitoredView:(id)a0 didMoveFromSuperview:(id)a1 toSuperview:(id)a2;
- (id)initWithScene:(id)a0;
- (BOOL)_monitorsView:(id)a0;
- (void).cxx_destruct;
- (id)_searchableView;
- (BOOL)_keyboardIsPreservingFindNavigatorAsRestorableResponder;
- (void)_sendPlacementUpdate;
- (void)dismissFindNavigatorEndingActiveSession:(BOOL)a0;
- (BOOL)findNavigatorShouldDismissOnResponderChange:(id)a0;
- (void)findNavigatorViewControllerDidRequestDismissal:(id)a0;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)a0;
- (void)presentFindNavigatorWithFindSession:(id)a0 showingReplace:(BOOL)a1;

@end
