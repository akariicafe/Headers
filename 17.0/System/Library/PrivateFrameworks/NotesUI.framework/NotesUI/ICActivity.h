@protocol UIPopoverPresentationControllerSourceItem;

@interface ICActivity : UIActivity

@property (copy, nonatomic) id /* block */ performActivityBlock;
@property (retain, nonatomic) id<UIPopoverPresentationControllerSourceItem> presentationSourceItem;
@property (nonatomic) long long contextPathEnum;

- (void)commonInit;
- (id)actionIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)actionWithCompletion:(id /* block */)a0;
- (id)initWithPerformActivity:(id /* block */)a0;
- (id)menuWithCompletion:(id /* block */)a0;
- (void)performActivityWithCompletion:(id /* block */)a0;

@end
