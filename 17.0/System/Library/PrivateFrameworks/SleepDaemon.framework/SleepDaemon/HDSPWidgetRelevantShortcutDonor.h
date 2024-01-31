@class INRelevantShortcutStore;

@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor> {
    INRelevantShortcutStore *_store;
}

- (id)init;
- (void)_setRelevantShortcuts:(id)a0;
- (void).cxx_destruct;
- (void)donateRelevanceForWidgetState:(long long)a0;

@end
