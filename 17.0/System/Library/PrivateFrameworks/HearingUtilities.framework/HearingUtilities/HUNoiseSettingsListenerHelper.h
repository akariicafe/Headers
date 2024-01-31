@class NSMutableArray;

@interface HUNoiseSettingsListenerHelper : NSObject {
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (id)initWithListenerAddress:(id)a0;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;

@end
