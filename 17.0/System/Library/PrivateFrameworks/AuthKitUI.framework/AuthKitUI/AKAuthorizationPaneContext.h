@class UIStackView, NSMutableArray, AKAuthorizationPaneViewController;

@interface AKAuthorizationPaneContext : NSObject

@property (retain, nonatomic) NSMutableArray *internalMutableConstraints;
@property (readonly, nonatomic) AKAuthorizationPaneViewController *paneViewController;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSMutableArray *mutableConstraints;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)a0;
- (void)addSubPane:(id)a0;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1 mutableConstraints:(id)a2;

@end
