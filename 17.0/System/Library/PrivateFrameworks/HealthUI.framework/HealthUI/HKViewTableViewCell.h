@class UIView;

@interface HKViewTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIView *hostedView;

- (void)setHostedView:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_pinViewToContent:(id)a0;

@end
