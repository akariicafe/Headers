@class NSString, UIImageView, UIImage, UILabel;

@interface PXSharedLibraryRulesTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *detail;
@property (retain, nonatomic) UIImage *image;

- (void)_updateImageView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateTitleLabel;
- (void)_updateSubtitleLabel;
- (void)_updateDetailLabel;

@end
