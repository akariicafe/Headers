@interface NUHistogramParameters : NSObject <NSCopying>

@property struct { struct { float r; float g; float b; float a; } r; struct { float r; float g; float b; float a; } g; struct { float r; float g; float b; float a; } b; struct { float r; float g; float b; float a; } a; } colorMatrix;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
