@interface IHKHarmonizationRequest : NSObject

@property (readonly) float harmonizationStrength;
@property (readonly) BOOL forceHarmonization;
@property (readonly) struct CGImage { } *fg;
@property (readonly) struct CGImage { } *bg;

- (void)dealloc;
- (id)initWithForeground:(struct CGImage { } *)a0 background:(struct CGImage { } *)a1;
- (id)initWithForeground:(struct CGImage { } *)a0 background:(struct CGImage { } *)a1 forceHarmonization:(BOOL)a2;
- (id)initWithForeground:(struct CGImage { } *)a0 background:(struct CGImage { } *)a1 forceHarmonization:(BOOL)a2 harmonizationStrength:(float)a3;

@end
