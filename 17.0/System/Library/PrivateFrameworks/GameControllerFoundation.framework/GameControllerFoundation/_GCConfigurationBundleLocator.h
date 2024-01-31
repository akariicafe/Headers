@class NSString, NSArray, NSObject;
@protocol OS_os_log, OS_dispatch_workloop, OS_dispatch_source, OS_dispatch_queue, GCConfigurationBundleSource;

@interface _GCConfigurationBundleLocator : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_mergedBundles;
    NSObject<OS_dispatch_source> *_filesystemChangedEventSource;
    id<GCConfigurationBundleSource> _filesystemSource;
    NSArray *_filesystemBundles;
    NSObject<OS_dispatch_source> *_assetsChangedEventSource;
    id<GCConfigurationBundleSource> _assetSource;
    NSArray *_assetBundles;
}

@property (readonly) NSString *configurationType;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_assetDidChange:(id)a0;
- (void)_filesystemDidChange:(id)a0;
- (id)fetchBundles;
- (id)initWithConfigurationType:(id)a0 provider:(id)a1;

@end
