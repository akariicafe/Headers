@interface OUConfiguration : NSObject <NSCopying>

@property (nonatomic) float maxFramerate;
@property (nonatomic) BOOL enable3DOR;
@property (nonatomic) BOOL enableRgbRefinement;
@property (nonatomic) BOOL enableMLRefinement;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithframerate:(float)a0 enable3DOR:(BOOL)a1 rgbRefinemnt:(BOOL)a2 mlRefinement:(BOOL)a3;

@end
