@class LPPointUnit;

@interface LPSize : NSObject <NSCopying>

@property (readonly, retain, nonatomic) LPPointUnit *width;
@property (readonly, retain, nonatomic) LPPointUnit *height;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } asSize;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSquarePoints:(id)a0;
- (id)initWithSquareSize:(double)a0;

@end
