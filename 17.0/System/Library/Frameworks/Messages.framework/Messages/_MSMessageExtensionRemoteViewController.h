@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController

@property (retain, nonatomic) NSUUID *requestUUID;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (nonatomic) BOOL providesExplicitSizeSnapshot;
@property (nonatomic) BOOL needsSizeMatchBeforeSnapshotSwap;
@property (nonatomic, getter=isReadyToDisplay) BOOL readyToDisplay;

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
