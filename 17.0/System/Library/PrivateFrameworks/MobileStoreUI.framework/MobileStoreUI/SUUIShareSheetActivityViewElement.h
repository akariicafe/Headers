@class NSString, SUUILabelViewElement, NSURL, SUUIImageViewElement, SUUIURLViewElement;

@interface SUUIShareSheetActivityViewElement : SUUIViewElement

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSURL *contentSourceURL;
@property (readonly, nonatomic) SUUIImageViewElement *image;
@property (readonly, nonatomic) SUUILabelViewElement *message;
@property (readonly, nonatomic) SUUILabelViewElement *title;
@property (readonly, nonatomic) SUUIURLViewElement *URL;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
