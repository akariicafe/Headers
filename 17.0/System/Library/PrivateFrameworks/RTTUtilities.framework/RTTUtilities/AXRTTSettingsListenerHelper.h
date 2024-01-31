@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (id)initWithListenerAddress:(void *)a0;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;

@end
