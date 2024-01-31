@class NSString;

@interface PXViewCountAnalyticsDestination : NSObject <CPAnalyticsDestinationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processEvent:(id)a0;

@end
