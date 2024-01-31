@interface CNHashBuilder : NSObject

+ (unsigned long long)cgsizeHash:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)cgpointHash:(struct CGPoint { double x0; double x1; })a0;
+ (unsigned long long)cgrectHash:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)a0;
+ (unsigned long long)pointerHash:(void *)a0;
+ (unsigned long long)dictionaryHash:(id)a0;
+ (unsigned long long)integerHash:(long long)a0;
+ (unsigned long long)cgfloatHash:(double)a0;
+ (unsigned long long)hashWithBlocks:(id /* block */)a0;
+ (unsigned long long)setHash:(id)a0;
+ (unsigned long long)orderedSetHash:(id)a0;
+ (unsigned long long)objectHash:(id)a0;
+ (unsigned long long)arrayHash:(id)a0;
+ (unsigned long long)boolHash:(BOOL)a0;

@end
