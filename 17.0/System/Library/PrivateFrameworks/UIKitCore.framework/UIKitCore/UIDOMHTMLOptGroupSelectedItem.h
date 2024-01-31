@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>

@property (retain, nonatomic) DOMHTMLOptGroupElement *_node;

- (BOOL)isGroup;
- (void)dealloc;
- (id)node;
- (void)setSelected:(BOOL)a0;
- (BOOL)selected;
- (id)initWithHTMLOptGroupNode:(id)a0;
- (void)unselect;

@end
