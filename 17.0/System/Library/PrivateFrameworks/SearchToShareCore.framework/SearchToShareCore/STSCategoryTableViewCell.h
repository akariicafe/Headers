@class UIView;

@interface STSCategoryTableViewCell : UITableViewCell {
    UIView *_seperator;
}

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)showSeperator:(BOOL)a0;

@end
