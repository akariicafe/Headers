@class UIWebBrowserView, DOMNode, UIWebOverflowContentView, CALayer, UIWebOverflowScrollListener;

@interface UIWebOverflowScrollView : UIScrollView

@property (nonatomic) UIWebBrowserView *webBrowserView;
@property (retain, nonatomic) UIWebOverflowScrollListener *scrollListener;
@property (retain, nonatomic) UIWebOverflowContentView *overflowContentView;
@property (retain, nonatomic) CALayer *webLayer;
@property (retain, nonatomic) DOMNode *node;
@property (nonatomic, getter=isBeingRemoved) BOOL beingRemoved;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (BOOL)fixUpViewAfterInsertion;
- (id)initWithLayer:(id)a0 node:(id)a1 webBrowserView:(id)a2;
- (void)replaceLayer:(id)a0;
- (id)superview;
- (void)willBeRemoved;

@end
