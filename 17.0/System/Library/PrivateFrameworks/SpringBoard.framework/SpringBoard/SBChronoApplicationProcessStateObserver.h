@class NSObject, SBIconController, CHSApplicationProcessStateChangeConsumer;
@protocol OS_dispatch_queue;

@interface SBChronoApplicationProcessStateObserver : NSObject {
    SBIconController *_iconController;
    CHSApplicationProcessStateChangeConsumer *_chronoConsumer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)applicationProcessStateDidChange:(id)a0;
- (BOOL)_shouldInformChronoForApplication:(id)a0;
- (void).cxx_destruct;
- (void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)a0;
- (id)initWithIconController:(id)a0;

@end
