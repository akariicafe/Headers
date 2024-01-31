@class NSArray, SUUIActivityIndicatorViewElement, SUUINavigationBarViewElement, NSString;

@interface SUUIChartsTemplateViewElement : SUUIViewElement {
    NSString *_type;
}

@property (readonly, nonatomic) SUUIActivityIndicatorViewElement *activityIndicator;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) SUUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
