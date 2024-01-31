@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
}

@property (retain, nonatomic) DOMHTMLOptionElement *_node;

- (BOOL)isGroup;
- (void)dealloc;
- (id)node;
- (void)setSelected:(BOOL)a0;
- (BOOL)selected;
- (id)initWithHTMLOptionNode:(id)a0;
- (void)unselect;

@end
