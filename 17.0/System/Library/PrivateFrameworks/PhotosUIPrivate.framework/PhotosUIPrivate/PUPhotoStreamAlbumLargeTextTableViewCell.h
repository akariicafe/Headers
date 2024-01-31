@class UILabel, UIImageView, NSArray;

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) NSArray *currentConstraints;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)detailText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setDetailText:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;

@end
