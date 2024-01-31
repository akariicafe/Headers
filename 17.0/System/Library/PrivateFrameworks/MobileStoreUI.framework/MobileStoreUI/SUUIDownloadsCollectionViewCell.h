@class UIImageView, SUUIDownloadsCellView;

@interface SUUIDownloadsCollectionViewCell : UICollectionViewCell {
    UIImageView *_editIndicator;
}

@property (readonly, nonatomic) SUUIDownloadsCellView *cellView;
@property (nonatomic) long long cellState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_reloadEditState;

@end
