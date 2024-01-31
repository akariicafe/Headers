@class NSString;

@interface LSMIRegistrantServerStrategy : NSObject <LSMIResultRegistrantStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)flushModificationState;
- (id)notificationJournallerForBundleIdentifier:(id)a0 registeringPlaceholder:(BOOL)a1;
- (id)preUnregistrationContextForBundleIdentifier:(id)a0;
- (void)runSyncBlockInWriteContext:(id /* block */)a0;

@end
