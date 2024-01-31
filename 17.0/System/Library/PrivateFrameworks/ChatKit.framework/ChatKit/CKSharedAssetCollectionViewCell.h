@class NSString, UILabel, UIView;

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) UIView *previewTitleContainerView;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UILabel *previewTitleLabel;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)layoutSubviews;
- (id)formattedTitleFromPreviewTitle:(id)a0;

@end
