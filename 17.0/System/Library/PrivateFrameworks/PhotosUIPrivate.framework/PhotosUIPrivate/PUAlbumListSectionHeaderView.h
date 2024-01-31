@class UIFont, NSArray, NSString, UILabel;

@interface PUAlbumListSectionHeaderView : UICollectionReusableView

@property (readonly, nonatomic) UILabel *_titleLabel;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (copy, nonatomic) NSString *sectionHeaderTitle;
@property (retain, nonatomic) UIFont *sectionHeaderTitleFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionHeaderInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
