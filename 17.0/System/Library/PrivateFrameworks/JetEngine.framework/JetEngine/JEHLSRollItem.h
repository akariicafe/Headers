@interface JEHLSRollItem : JEHLSItem

@property (nonatomic) unsigned long long duration;

- (BOOL)containsOverallPosition:(unsigned long long)a0;
- (unsigned long long)endOverallPosition;
- (id)initWithStartOverallPosition:(unsigned long long)a0 duration:(unsigned long long)a1 metricsData:(id)a2;

@end
