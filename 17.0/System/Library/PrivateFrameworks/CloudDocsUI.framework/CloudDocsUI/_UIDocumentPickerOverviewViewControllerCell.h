@class UIImageView;

@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) BOOL showNewlyAdded;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_dotImage;

@end
