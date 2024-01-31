@class NSString, NSMutableSet;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *typesToObserve;
@property (weak) id<DDSAssetObservingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)notifyObserversAssetsUpdatedForType:(id)a0;
- (void).cxx_destruct;
- (void)observeAssetType:(id)a0;
- (void)endObservingTypes:(id)a0;
- (void)beginObservingType:(id)a0;

@end
