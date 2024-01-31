@class NSMutableDictionary;

@interface NUTrait : NSObject <NSCopying>

@property (readonly, nonatomic) double defaultValue;
@property (readonly, nonatomic) NSMutableDictionary *traitBlocks;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaultValue:(double)a0;
- (double)valueForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (double)valueForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 deviceTrait:(id)a2;
- (id)when:(unsigned long long)a0 block:(id /* block */)a1;

@end
