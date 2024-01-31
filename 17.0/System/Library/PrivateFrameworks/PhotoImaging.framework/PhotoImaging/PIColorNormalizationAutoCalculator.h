@class NSString;

@interface PIColorNormalizationAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (class, readonly, nonatomic, getter=isAvailable) BOOL available;

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoCalculatorWithImageData:(id)a0 orientation:(long long)a1;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;

@end
