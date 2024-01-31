@class NSHashTable;

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)subtype;
- (void)deregisterInteraction:(id)a0;
- (id)_init;
- (id)collectAllActiveInteractions;
- (void)deregisterAllInteractionsForWindow:(id)a0;
- (void).cxx_destruct;
- (void)_sendEventToInteractions;
- (void)registerInteraction:(id)a0;
- (long long)type;

@end
