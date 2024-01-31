@class DMCRFMBRestoreDelegate, NSString, MBManager, NSObject;
@protocol OS_dispatch_queue, DMCRFSnapshotSourceDelegate;

@interface DMCRFMBSnapshotSource : NSObject <DMCRFSnapshotSource>

@property (retain, nonatomic) MBManager *mobileBackup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) DMCRFMBRestoreDelegate *restoreDelegate;
@property (weak, nonatomic) id<DMCRFSnapshotSourceDelegate> delegate;
@property (copy, nonatomic) NSString *personaIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRestorableSnapshotsWithCompletion:(id /* block */)a0;
- (void)fetchAppBundleIDsForSnapshot:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPersonaIdentifier:(id)a0 delegate:(id)a1;
- (BOOL)startRestoreForSnapshot:(id)a0 excludingAppBundleIdentifiers:(id)a1 completion:(id /* block */)a2;

@end
