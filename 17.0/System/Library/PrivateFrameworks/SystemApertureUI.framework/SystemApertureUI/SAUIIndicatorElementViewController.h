@class NSString, NSHashTable;
@protocol SAUILayoutHosting, SAUIIndicatorElementViewProviding;

@interface SAUIIndicatorElementViewController : UIViewController <SAUIElementViewControlling> {
    NSHashTable *_observers;
}

@property (readonly, nonatomic) id<SAUIIndicatorElementViewProviding> elementViewProvider;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)viewDidLoad;
- (BOOL)handleLongPress:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleTap:(id)a0;
- (void)addElementViewControllingObserver:(id)a0;
- (void)removeElementViewControllingObserver:(id)a0;
- (id)initWithIndicatorElementViewProvider:(id)a0;

@end
