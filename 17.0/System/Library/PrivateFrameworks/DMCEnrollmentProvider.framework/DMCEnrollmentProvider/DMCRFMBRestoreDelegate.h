@protocol DMCRFSnapshotSourceDelegate, DMCRFSnapshotSource;

@interface DMCRFMBRestoreDelegate : NSObject <MBManagerDelegate>

@property (weak, nonatomic) id<DMCRFSnapshotSourceDelegate> delegate;
@property (weak, nonatomic) id<DMCRFSnapshotSource> snapshotSource;

- (void)managerDidFinishRestore:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 source:(id)a1;

@end
