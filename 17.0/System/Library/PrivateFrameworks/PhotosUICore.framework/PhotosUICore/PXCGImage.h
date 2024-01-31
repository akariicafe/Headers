@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
