@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject {
    BOOL _parentWantsCellNeedsLayout;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, weak, nonatomic) UIView *parentCellView;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)initWithParentView:(id)a0;
- (id)initWithTableViewCell:(id)a0;
- (void)resetLayout;
- (id)initWithCollectionViewCell:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;

@end
