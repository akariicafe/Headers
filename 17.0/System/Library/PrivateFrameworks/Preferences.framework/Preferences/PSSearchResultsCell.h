@interface PSSearchResultsCell : UITableViewCell

@property (nonatomic) BOOL shouldIndentContent;
@property (nonatomic) BOOL shouldIndentSeparator;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
