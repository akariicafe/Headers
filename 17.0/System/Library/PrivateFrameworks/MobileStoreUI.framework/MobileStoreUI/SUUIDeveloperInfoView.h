@class NSMutableArray, SUUIClientContext, UIView, SUUIDeveloperInfo, SUUIProductInformationView;

@interface SUUIDeveloperInfoView : UIView {
    UIView *_infoSeparatorView;
    SUUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}

@property (readonly, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) SUUIDeveloperInfo *developerInfo;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDeveloperInfo:(id)a0 clientContext:(id)a1;

@end
