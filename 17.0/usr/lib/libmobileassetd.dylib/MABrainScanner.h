@class MAAsset, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface MABrainScanner : NSObject {
    NSObject<OS_dispatch_queue> *_scanQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSDate *_lastCheck;
    MAAsset *_lastAsset;
}

@property (retain, nonatomic) NSNumber *compatibilityVersion;

- (id)init;
- (void).cxx_destruct;
- (void)locateAvailableUpdateBrain:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
