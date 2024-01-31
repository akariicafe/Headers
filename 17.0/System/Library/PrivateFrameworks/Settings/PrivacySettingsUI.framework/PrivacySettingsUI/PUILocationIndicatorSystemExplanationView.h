@class UILabel;

@interface PUILocationIndicatorSystemExplanationView : PUILocationIndicatorExplanationView {
    UILabel *_additionalInfoLabel;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
