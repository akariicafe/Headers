@interface HFSimpleFormatter : NSFormatter <NSCopying>

@property (readonly, copy, nonatomic) id /* block */ formatterBlock;
@property (readonly, copy, nonatomic) id /* block */ attributedFormatterBlock;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)initWithAttributedFormatterBlock:(id /* block */)a0;
- (id)initWithFormatterBlock:(id /* block */)a0;

@end
