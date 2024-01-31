@class PKPass, NSArray, NSMutableArray;
@protocol PKPassTileGroupViewDelegate;

@interface PKPassTileGroupView : UIView {
    struct CGSize { double width; double height; } _boundsSize;
    BOOL _selectable;
    NSArray *_contentByRows;
    BOOL _effectiveSelectable;
    NSArray *_effectiveContentByRows;
    NSMutableArray *_itemViewsByRows;
    BOOL _animated;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
}

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, copy, nonatomic) NSArray *content;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) unsigned long long maximumRows;
@property (weak, nonatomic) id<PKPassTileGroupViewDelegate> delegate;

+ (void)extractSupportedVehicleFunction:(id *)a0 action:(id *)a1 forTile:(id)a2 applicationIdentifier:(id)a3 keyIdentifier:(id)a4;

- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_tileViewTapped:(id)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)performBatchUpdates:(id /* block */)a0 animated:(BOOL)a1;
- (void)setMaximumRows:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setPass:(id)a0 content:(id)a1 animated:(BOOL)a2;

@end
