@class NSString, DACLifecycleManager;

@interface DACLifecycleManagerMediator : NSObject <DACLifecycleClientInterface> {
    DACLifecycleManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
