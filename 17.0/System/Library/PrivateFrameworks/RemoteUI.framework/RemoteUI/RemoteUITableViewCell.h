@class UIColor, UIImageView, RUIWebContainerView, UIView, UIImage, UIButton;

@interface RemoteUITableViewCell : UITableViewCell {
    UIImageView *_invalidRowView;
    BOOL _didSetupEditableTextFieldLargeText;
    UIButton *_detailLinkButton;
    id /* block */ _detailLinkHandler;
    UIColor *_accessoryColor;
    UIImage *_image;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imagePadding;
    UIColor *_imageTintColor;
}

@property (nonatomic) BOOL forceFullSizeDetailLabel;
@property (nonatomic) BOOL leftAlignDetailLabel;
@property (nonatomic) long long remoteUIAccessoryType;
@property (retain, nonatomic) UIView *remoteUIAccessoryView;
@property (nonatomic) BOOL activityIndicatorVisible;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) RUIWebContainerView *webContainerView;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_checkmarkImage:(BOOL)a0;
- (id)_disclosureChevronImage:(BOOL)a0;
- (id)editableTextField;
- (void)_showActivityIndicatorAccessory;
- (void)setHTMLData:(id)a0 sourceURL:(id)a1 delegate:(id)a2;
- (void)_accessoriesChanged;
- (void)_detailLinkPressed;
- (id)_paddedImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)_setRemoteUIAccessoryType:(long long)a0 withColor:(id)a1;
- (void)addDetailLinkButton:(id)a0;
- (id)detailLinkButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expand:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 by:(struct CGSize { double x0; double x1; })a1 anchor:(struct CGPoint { double x0; double x1; })a2;
- (void)setDetailLinkText:(id)a0 handler:(id /* block */)a1;
- (void)setHTMLSubLabelData:(id)a0 sourceURL:(id)a1 delegate:(id)a2;
- (void)setImage:(id)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 tintColor:(id)a2;
- (void)setRowInvalid:(BOOL)a0;
- (double)webViewWidth;

@end
