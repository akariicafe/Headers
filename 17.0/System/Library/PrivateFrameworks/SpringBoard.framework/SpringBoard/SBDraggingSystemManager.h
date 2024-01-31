@class NSString, NSMapTable, NSHashTable;

@interface SBDraggingSystemManager : NSObject <UIDraggingSystemMonitorDelegate> {
    NSHashTable *_observers;
    NSMapTable *_commandeerReasons;
}

@property (class, readonly, nonatomic) SBDraggingSystemManager *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)dragSessionDidBegin:(id)a0;
- (void)dragSessionDidEnd:(id)a0;
- (id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)a0;
- (void)setCommandeered:(BOOL)a0 forDraggingSystemSession:(id)a1 forReason:(id)a2;
- (void)setCommandeered:(BOOL)a0 forDropSession:(id)a1 forReason:(id)a2;

@end
