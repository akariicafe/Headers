@class CKForceLayoutAnimator, WFContentItem, WFContentCoercionNodeView;

@interface WFContentGraphViewController : UIViewController

@property (retain, nonatomic) CKForceLayoutAnimator *animator;
@property (retain, nonatomic) WFContentCoercionNodeView *rootNodeView;
@property (nonatomic) BOOL coercing;
@property (readonly, nonatomic) WFContentItem *contentItem;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithContentItem:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)done;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)useSmallBubbles;
- (void)panNode:(id)a0;
- (void)tapNode:(id)a0;

@end
