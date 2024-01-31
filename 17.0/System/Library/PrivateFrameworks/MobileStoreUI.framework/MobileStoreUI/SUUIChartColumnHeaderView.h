@class NSArray;

@interface SUUIChartColumnHeaderView : UIControl {
    NSArray *_buttons;
}

@property (readonly, nonatomic) double edgePadding;
@property (nonatomic) long long selectedTitleIndex;
@property (copy, nonatomic) NSArray *titles;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_buttonAction:(id)a0;
- (void)_reloadSelectedButton;

@end
