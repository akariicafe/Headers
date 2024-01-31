@class UIStackView, UIImageView, UILabel, UIButton;

@interface RUICustomLinkTableViewCell : RemoteUITableViewCell {
    id /* block */ _detailLinkHandler;
    UIButton *_detailLinkButton;
}

@property (retain, nonatomic) UILabel *customLinkTextLabelInternal;
@property (retain, nonatomic) UILabel *customLinkDetailTextLabelInternal;
@property (retain, nonatomic) UILabel *customLinkSubLabelInternal;
@property (retain, nonatomic) UIImageView *customImageViewInternal;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *innerStackView;
@property (readonly, nonatomic) UILabel *customLinkTextLabel;
@property (readonly, nonatomic) UILabel *customLinkDetailTextLabel;
@property (readonly, nonatomic) UILabel *customLinkSubLabel;
@property (readonly, nonatomic) UIImageView *customLinkImageView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_detailLinkPressed;
- (id)_detailTextLabelInternal;
- (id)_imageViewInternal;
- (void)_initializeViews;
- (id)_subLabelInternal;
- (id)_textLabelInternal;
- (void)addDetailLinkButton:(id)a0;
- (void)setDetailLinkText:(id)a0 handler:(id /* block */)a1;

@end
