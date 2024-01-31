@class UIScrollView, UIView;
@protocol UIScrollAccessory;

@interface _UIIndexBarScrollAccessoryContainerAdapterView : UIView <UIScrollAccessory> {
    UIView<UIScrollAccessory> *_delegatedView;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (readonly, nonatomic) BOOL overlay;

- (void)update;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContents:(id)a0 delegatingToView:(id)a1;

@end
