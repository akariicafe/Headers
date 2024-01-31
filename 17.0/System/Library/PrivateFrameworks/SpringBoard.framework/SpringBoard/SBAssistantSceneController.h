@class NSString, SBWindow, NSHashTable, SBAssistantRootViewController, SBWindowScene;

@interface SBAssistantSceneController : NSObject <SBAssistantObserver, SBAssistantSceneControlling>

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) SBWindow *window;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;

- (id)initWithWindowScene:(id)a0;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)a0 completion:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (void)assistantDidDisappear:(id)a0 windowScene:(id)a1;
- (void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)dismissAssistantViewIfNecessary;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void).cxx_destruct;
- (void)assistantWillDisappear:(id)a0 windowScene:(id)a1;
- (void)addObserver:(id)a0;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)a0;

@end
