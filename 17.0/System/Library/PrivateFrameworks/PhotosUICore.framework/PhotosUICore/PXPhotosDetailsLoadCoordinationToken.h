@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    BOOL _didComplete;
}

@property (readonly, weak, nonatomic) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (void)complete;
- (id)init;
- (void)dealloc;
- (void)_timeout;
- (void).cxx_destruct;
- (id)_initWithLoadCoordinator:(id)a0;

@end
