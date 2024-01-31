@class NSString;

@interface NTLegacyFeedPersonalizerFactory : NSObject <FCFeedPersonalizerFactoryType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)newFeedPersonalizerWithAggregateStore:(id)a0 appConfigurationManager:(id)a1 todayPrivateData:(id)a2;

@end
