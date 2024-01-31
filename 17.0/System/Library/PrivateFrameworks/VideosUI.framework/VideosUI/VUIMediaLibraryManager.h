@class VUISidebandMediaLibrary, NSArray, VUIDeviceMediaLibrary, VUIMediaLibrary, NSString, VUIAggregateMediaLibrary, NSObject;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManager;

@interface VUIMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManagerDelegate>

@property (retain, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (retain, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary;
@property (retain, nonatomic) VUIAggregateMediaLibrary *aggregateMediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSObject<VUIHomeShareMediaLibraryManager> *homeShareManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property (retain, nonatomic) VUIMediaLibrary *activeMediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_deviceMediaLibrary;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (void)_enqueueStrongSelfCompletionQueueBlock:(id /* block */)a0;
- (id)_homeShareMediaLibraryManager;
- (id)_mediaLibraryForIdentifier:(id)a0;
- (void)_postHomeShareMediaLibrariesDidChangeNotificationWithMediaLibraries:(id)a0 andChangeSet:(id)a1;
- (void)beginDiscoveringHomeShareMediaLibraries;
- (void)endDiscoveringHomeShareMediaLibraries;
- (void)homeShareManager:(id)a0 mediaLibrariesDidUpdate:(id)a1 withChangeSet:(id)a2;
- (id)mediaLibraryForIdentifier:(id)a0;

@end
