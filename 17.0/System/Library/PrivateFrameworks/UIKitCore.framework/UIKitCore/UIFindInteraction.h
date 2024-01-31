@class UITextSearchOptions, NSString, UIFindSession, UIView, _UIFindNavigatorHarness;
@protocol UIFindInteractionDelegate;

@interface UIFindInteraction : NSObject <UIInteraction> {
    UIView *_alternateHostView;
    unsigned long long _lastUsedHostingStrategy;
    struct { unsigned char respondToPlacementChangeNotifications : 1; unsigned char provideHostScrollView : 1; } _privateDelegateDoes;
    struct { unsigned char aWebView : 1; unsigned char aMailComposeView : 1; } _hostViewIs;
}

@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;
@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;

@property (retain, nonatomic) _UIFindNavigatorHarness *findNavigatorHarness;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly, nonatomic) UIFindSession *activeFindSession;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *replacementText;
@property (copy, nonatomic) id /* block */ optionsMenuProvider;
@property (readonly, weak, nonatomic) id<UIFindInteractionDelegate> delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)findNext;
- (unsigned long long)_currentHostingStrategy;
- (void)_updateHostViewConformance;
- (id)_hostScrollView;
- (void)findPrevious;
- (id)_createActiveFindSessionIfNecessary;
- (void)presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)_systemInputAssistantCenterVisibilityChanged:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)_willChangeNavigatorPlacement:(id)a0;
- (id)initWithSessionDelegate:(id)a0;
- (id)_findNavigatorSceneComponent;
- (void)willMoveToView:(id)a0;
- (void)_keyboardDidChangePlacementNotification:(id)a0;
- (id)_findNavigatorHosting;
- (void)_didEndActiveFindSession;
- (id)_findNavigatorHostingForStrategy:(unsigned long long)a0;
- (void)setSearchableObject:(id)a0;
- (id)searchableObject;
- (void)_recomputeHostingStrategyIfNecessary;
- (void).cxx_destruct;
- (void)dismissFindNavigator;
- (id)_currentFindNavigatorController;
- (unsigned long long)_computedHostingStrategy;
- (void)_presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)_didBeginActiveFindSession;
- (void)updateResultCount;

@end
