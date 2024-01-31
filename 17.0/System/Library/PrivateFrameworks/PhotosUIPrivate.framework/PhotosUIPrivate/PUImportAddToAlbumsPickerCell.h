@class NSArray, UIImageView, UIImage, UILabel, NSLayoutConstraint;
@protocol PXDisplayCollection;

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    BOOL _isPerformingUpdate;
}

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintNoImage;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintWithImage;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, nonatomic) UIImage *thumbnail;

- (void)setType:(unsigned long long)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setThumbnail:(id)a0;
- (void)prepareForReuse;
- (id)mutableChangeObject;
- (void)setCollection:(id)a0;
- (void)updateConstraints;
- (BOOL)isSelectable;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)updateTitle;
- (void)_configureCell;

@end
