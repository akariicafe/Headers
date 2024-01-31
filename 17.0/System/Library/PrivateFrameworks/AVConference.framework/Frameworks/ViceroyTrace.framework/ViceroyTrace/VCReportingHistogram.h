@interface VCReportingHistogram : VCHistogram

+ (const unsigned int *)bucketWithType:(int)a0 count:(unsigned int *)a1;
+ (id)rangesDescription:(int)a0;

- (id)initWithType:(int)a0 bucketValues:(id)a1;

@end
