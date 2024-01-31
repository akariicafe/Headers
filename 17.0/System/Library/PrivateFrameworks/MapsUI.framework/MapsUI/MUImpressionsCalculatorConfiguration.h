@class UIScrollView, MUImpressionsLogger, UIView;

@interface MUImpressionsCalculatorConfiguration : NSObject {
    id /* block */ _containerViewProvider;
    UIView *_cachedContainerView;
}

@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *hostingContainerView;
@property (readonly, nonatomic) MUImpressionsLogger *logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0 contentScrollView:(id)a1 containerViewProvider:(id /* block */)a2;

@end
