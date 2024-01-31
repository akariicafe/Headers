@interface PKLinedPaper : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } lineSpacing;
@property (readonly, nonatomic) double horizontalInset;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLineSpacing:(struct CGPoint { double x0; double x1; })a0 horizontalInset:(double)a1;

@end
