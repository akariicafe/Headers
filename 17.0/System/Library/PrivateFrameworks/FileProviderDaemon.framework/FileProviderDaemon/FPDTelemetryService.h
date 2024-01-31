@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDTelemetryService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
