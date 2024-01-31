@interface VNTrackOpticalFlowRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) BOOL keepNetworkOutput;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
