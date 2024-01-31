@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject

@property (retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)publishInfo:(id)a0 completion:(id /* block */)a1;

@end
