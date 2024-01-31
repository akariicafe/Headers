@class NSString, UIVisualEffectView, NSHashTable;

@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {
    UIVisualEffectView *_backdropView;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)_observers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)removeContentContainerObserver:(id)a0;
- (void)addContentContainerObserver:(id)a0;

@end
