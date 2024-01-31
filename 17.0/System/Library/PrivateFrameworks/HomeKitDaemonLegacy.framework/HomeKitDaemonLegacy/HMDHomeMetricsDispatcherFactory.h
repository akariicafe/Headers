@class NSString;

@interface HMDHomeMetricsDispatcherFactory : HMFObject <HMDHomeMetricsDispatcherFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createHomeMetricsDispatcherWithIdentifier:(id)a0 logEventSubmitter:(id)a1;

@end
