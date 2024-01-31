@class NSString, UIImageView, UILabel, PKPerformActionLoadingView;

@interface PKSelectActionGroupActionsHeader : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    PKPerformActionLoadingView *_loadingView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isLoading) BOOL loading;

- (struct CGSize { double x0; double x1; })_imageSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithPass:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
