@interface IMDFileEventBroadcaster : NSObject {
    void /* unknown type, empty encoding */ fileEventStream;
}

+ (id)sharedInstance;

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)observeChangesInPath:(id)a0;

@end
