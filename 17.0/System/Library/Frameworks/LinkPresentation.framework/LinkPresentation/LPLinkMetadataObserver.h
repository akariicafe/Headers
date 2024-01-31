@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject {
    LPLinkMetadata *_metadata;
    id /* block */ _callback;
    BOOL _hasScheduledCallback;
}

- (void)stopObserving;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 callback:(id /* block */)a1;

@end
