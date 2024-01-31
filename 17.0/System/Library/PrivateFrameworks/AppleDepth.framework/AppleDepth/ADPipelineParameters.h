@class NSString;

@interface ADPipelineParameters : NSObject

@property (nonatomic) unsigned long long outputDepthUnits;
@property (readonly, retain, nonatomic) NSString *deviceName;

- (id)init;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
