@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)start;
- (void)_setupDistributedListener;
- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (void)_setupDarwinListener;

@end
