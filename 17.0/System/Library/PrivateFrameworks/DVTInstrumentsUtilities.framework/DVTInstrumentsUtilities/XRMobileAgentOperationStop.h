@class NSString;

@interface XRMobileAgentOperationStop : NSObject <XRMobileAgentStop>

@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveMobileAgent:(id)a0;

@end
