@class _NSDataFileBackedFuture, PFCloudKitStoreMonitor, NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitSchemaGenerator : NSObject {
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    PFCloudKitStoreMonitor *_storeMonitor;
}

@property (readonly, nonatomic) _NSDataFileBackedFuture *representativeFuture;

- (void)dealloc;
- (id)initWithMirroringOptions:(id)a0 forStoreInMonitor:(id)a1;

@end
