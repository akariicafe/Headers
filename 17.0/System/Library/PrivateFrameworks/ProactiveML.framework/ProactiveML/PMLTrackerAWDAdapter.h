@class NSString;

@interface PMLTrackerAWDAdapter : NSObject <PMLTrackerAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postMetricId:(unsigned int)a0 message:(id)a1;

@end
