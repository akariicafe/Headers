@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject

@property (retain, nonatomic) NSHashTable *itemManagers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_performStateDump;
- (void)registerItemManager:(id)a0;

@end
