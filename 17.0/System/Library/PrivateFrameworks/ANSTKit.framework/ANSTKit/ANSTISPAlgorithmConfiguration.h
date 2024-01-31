@interface ANSTISPAlgorithmConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) BOOL enableObjectTracking;
@property (nonatomic) BOOL enableSegmentation;
@property (nonatomic) long long networkResolution;
@property (nonatomic) long long runningFrameRate;

- (id)init;
- (id)description;
- (id)initWithVersion:(unsigned long long)a0;

@end
