@class NSMutableArray, AXBaseSettings;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
    AXBaseSettings *_settings;
}

- (void)dealloc;
- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;

@end
