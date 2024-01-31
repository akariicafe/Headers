@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject

@property (retain, nonatomic) DOMNode *node;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL isUserScroll;

- (void)dealloc;
- (BOOL)coalesceScrollForNode:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 isUserScroll:(BOOL)a2;
- (id)initWithNode:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 isUserScroll:(BOOL)a2;

@end
