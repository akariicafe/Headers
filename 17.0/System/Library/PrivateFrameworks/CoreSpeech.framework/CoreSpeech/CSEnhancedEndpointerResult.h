@class NSArray;

@interface CSEnhancedEndpointerResult : NSObject

@property (readonly, nonatomic) BOOL didDefaultEndpointerFire;
@property (readonly, nonatomic) BOOL didRelaxedEndpointerFire;
@property (retain, nonatomic) NSArray *featuresToLog;
@property (readonly, nonatomic) float endpointPosterior;
@property (readonly, nonatomic) int extraDelayMs;

- (id)init;
- (void).cxx_destruct;
- (BOOL)didEndpointerFire;
- (void)setDidDefaultEndpointerFire:(BOOL)a0;
- (void)setDidRelaxedEndpointerFire:(BOOL)a0;
- (void)setEndpointPosterior:(float)a0;
- (void)setExtraDelayMs:(int)a0;

@end
