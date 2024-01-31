@class NSString, _UIContentUnavailableView;

@interface SUUIContentUnavailableTableViewCell : SUUITableViewCell {
    _UIContentUnavailableView *_view;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
