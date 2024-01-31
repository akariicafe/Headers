@class FBSDisplayLayoutMonitor, NSString;

@interface WFApplicationVisibilitySystemEventProvider : NSObject <WFSystemEventProvider>

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (nonatomic) BOOL state;
@property (copy, nonatomic) id /* block */ eventCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (long long)applicationDidAppearEventType;
- (long long)applicationDidDisappearEventType;
- (void)handleLayoutChange:(id)a0;
- (BOOL)layoutContainsApplication:(id)a0;

@end
