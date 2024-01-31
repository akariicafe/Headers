@class NSString, NSMutableSet, UIScrollView, NSHashTable;

@interface ASCMetricsScrollObserver : NSObject <_UIScrollViewScrollObserver>

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSMutableSet *appearedModelIDs;
@property (readonly, nonatomic) NSMutableSet *renderedModelIDs;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerForScrollView:(id)a0;

- (void)_observeScrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)modelDidAppear:(id)a0;
- (void)modelDidRender:(id)a0;
- (struct CGPoint { double x0; double x1; })centerOfView:(id)a0;
- (BOOL)hasModelAppeared:(id)a0;
- (BOOL)hasModelRendered:(id)a0;
- (BOOL)isDelegateAdded:(id)a0;
- (void)modelDidDisappear:(id)a0;

@end
