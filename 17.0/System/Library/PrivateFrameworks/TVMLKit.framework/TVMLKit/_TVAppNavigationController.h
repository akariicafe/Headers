@class UIViewController, TVApplicationController, NSString, UINavigationController, IKAppTabBar, UITapGestureRecognizer;
@protocol _TVAppNavigationControllerDelegate, IKAppNavigationController, NSObject;

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController> {
    struct { unsigned char shouldOverrideModalBehaviorForPlaybackDocument : 1; unsigned char shouldIgnoreDismissal : 1; unsigned char shouldDismissShroud : 1; unsigned char willLoadAppDocumentWithController : 1; unsigned char willDisappear : 1; } _ancDelegateFlags;
}

@property (retain, nonatomic) UITapGestureRecognizer *menuRecognizer;
@property (retain, nonatomic) UIViewController *presentedModalViewController;
@property (retain, nonatomic) id<NSObject> modalPresenterObserverToken;
@property (readonly, weak, nonatomic) TVApplicationController *appController;
@property (weak, nonatomic) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, nonatomic) id<IKAppNavigationController> appNavigationController;
@property (readonly, nonatomic) IKAppTabBar *appTabBar;

- (id)initWithRootViewController:(id)a0;
- (id)activeDocument;
- (void)dismissed;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)clear;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)removeDocument:(id)a0;
- (void)loadView;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setTitle:(id)a0;
- (id)documents;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (void)dismissModal;
- (BOOL)_hasBeenCleared;
- (id)initWithApplicationController:(id)a0;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToDocument:(id)a0;
- (void)popToRootDocument;
- (void)presentModal:(id)a0 options:(id)a1;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;
- (void)setDocuments:(id)a0 options:(id)a1;
- (void)dismissAllModals:(id /* block */)a0;
- (void)_doWillLoadAppDocumentWithController:(id)a0;
- (void)_handleMenuAction:(id)a0;
- (void)_presentModalDocumentController:(id)a0 options:(id)a1;
- (BOOL)_shouldIgnoreModalDismissal:(id)a0;
- (BOOL)_shouldOverrideModalBehaviorForPlaybackDocument:(id)a0 andExistingPlaybackDocument:(id)a1;
- (void)dismissModal:(BOOL)a0;
- (id)popToRootDocument:(BOOL)a0;
- (void)setAppNavigationControllersDelegate:(id)a0;

@end
