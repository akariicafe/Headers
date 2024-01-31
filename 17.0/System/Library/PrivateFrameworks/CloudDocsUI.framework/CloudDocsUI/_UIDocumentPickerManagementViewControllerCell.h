@class UIImageView;

@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) BOOL showNewlyAdded;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_dotImage;

@end
