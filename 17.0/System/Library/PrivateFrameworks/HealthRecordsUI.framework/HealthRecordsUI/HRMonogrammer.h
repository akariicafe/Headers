@interface HRMonogrammer : NSObject

@property (nonatomic) struct CGSize { double width; double height; } monogramSize;

- (id)initWithDiameter:(double)a0;
- (id)_monogramSymbolNameWith:(id)a0;
- (id)_monogramWith:(id)a0;
- (id)makeImageForTitle:(id)a0;
- (id)monogramForFirstWordFromText:(id)a0;
- (id)monogramSymbolNameWith:(id)a0;

@end
