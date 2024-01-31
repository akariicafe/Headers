@interface IHKHarmonizationResult : NSObject

@property (readonly) struct CGImage { } *harmonized;
@property (readonly) float gatingScore;
@property (readonly) BOOL shouldHarmonize;

- (void)dealloc;
- (id)initWithHarmonized:(struct CGImage { } *)a0 gatingScore:(float)a1 shouldHarmonize:(BOOL)a2;

@end
