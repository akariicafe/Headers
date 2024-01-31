@class NSString, TSXExpositorClient;

@interface TSXExpositorClientExported : NSObject <TSXExpositorClientProtocol>

@property (weak, nonatomic) TSXExpositorClient *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gPTPManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void).cxx_destruct;
- (void)clockManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;

@end
