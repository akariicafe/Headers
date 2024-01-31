@interface HKSelectedRangeLabel : UILabel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

+ (void)clearCaches;
+ (id)_addChevron:(id)a0 font:(id)a1;
+ (id)_attributedMultiplePrefixStringForSelectedRangeData:(id)a0 attributedString:(id)a1 font:(id)a2 foregroundColor:(id)a3;
+ (id)_attributedStringForSelectedRangeData:(id)a0 font:(id)a1 foregroundColor:(id)a2 prefixColor:(id)a3 prefersImageAffixes:(BOOL)a4 embedded:(BOOL)a5;
+ (id)_stringForSelectedRangeData:(id)a0 embedded:(BOOL)a1;
+ (id)attributedStringForSelectedRangeData:(id)a0 font:(id)a1 foregroundColor:(id)a2 prefixColor:(id)a3 prefersImageAffixes:(BOOL)a4;
+ (id)standardPrefixColorForSelectedRangeData:(id)a0 defaultColor:(id)a1;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSelectedRangeData:(id)a0;

@end
