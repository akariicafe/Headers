@class NSString;

@interface MTLToolsPerformanceStateAssertion : MTLToolsObject <MTLPerformanceStateAssertion>

@property (readonly) long long requestedPerformanceState;
@property (readonly) BOOL wasPerformanceStateAssertionMaintained;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
