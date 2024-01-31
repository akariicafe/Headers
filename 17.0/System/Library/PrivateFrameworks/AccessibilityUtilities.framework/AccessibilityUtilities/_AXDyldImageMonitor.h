@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface _AXDyldImageMonitor : NSObject <AXImageMonitor> {
    NSHashTable *_imageMonitorObservers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_dyldDidAddImage:(id)a0;
- (void)addImageMonitorObserver:(id)a0;
- (void)enumerateLoadedImagePaths:(id /* block */)a0;
- (id)loadedImagePaths;
- (void)removeImageMonitorObserver:(id)a0;

@end
