@interface TSTimeLineFilter : NSObject

@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; } rateRatio;
@property (readonly, nonatomic) BOOL canConvertTime;

- (void)resetFilter;
- (void)addTimestamps:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1;

@end
