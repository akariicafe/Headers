@interface MKPlaceSectionRowView : MKPlaceSectionItemView

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateBackgroundColor:(BOOL)a0;

@end
