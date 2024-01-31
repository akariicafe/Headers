@class UILabel;

@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *detailLabel;

+ (id)viewForComponent:(id)a0;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;
- (void)addSubviewsForComponentModel:(id)a0;

@end
