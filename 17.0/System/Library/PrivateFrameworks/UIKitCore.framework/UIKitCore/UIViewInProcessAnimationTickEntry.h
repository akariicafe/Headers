@interface UIViewInProcessAnimationTickEntry : NSObject

@property (readonly, nonatomic) struct CAFrameRateRange { float minimum; float maximum; float preferred; } preferredFrameRateRange;
@property (readonly, nonatomic) unsigned int updateReason;
@property (readonly, nonatomic, getter=isvelocityUsableForVFD) BOOL velocityUsableForVFD;
@property (readonly, nonatomic) BOOL allowsVFD;
@property (readonly, nonatomic) id /* block */ callback;

- (id)initWithPreferredFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 updateReason:(unsigned int)a1 velocityUsableForVFD:(BOOL)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
