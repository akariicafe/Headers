@class NSMutableDictionary, NSString, ICDeviceBrowser, NSHashTable;

@interface PHImportController : NSObject <ICDeviceBrowserDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourceListLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _importInProgressLock;
}

@property (retain, nonatomic) ICDeviceBrowser *deviceBrowser;
@property (retain, nonatomic) NSMutableDictionary *importSources;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL importInProgress;
@property (retain, nonatomic) id processInfoActivityToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)dispatchApply:(unsigned long long)a0 withConcurrencyLimit:(unsigned long long)a1 canceler:(id)a2 ofBlock:(id /* block */)a3;
+ (BOOL)isDeviceVolumeAtURL:(id)a0;
+ (BOOL)isValidFolderAtURL:(id)a0;

- (id)init;
- (id)supportedTypes;
- (void).cxx_destruct;
- (id)importSourceForURLs:(id)a0 exceptions:(id *)a1;
- (void)_addImportSource:(id)a0;
- (void)_notifyOfFailureToAddImportSource:(id)a0 exceptions:(id)a1;
- (void)_removeImportSourceWithUUID:(id)a0;
- (void)accessSourceList:(id /* block */)a0;
- (void)addImportControllerObserver:(id)a0;
- (void)addImportSourceForUrls:(id)a0;
- (void)deviceBrowser:(id)a0 didAddDevice:(id)a1 moreComing:(BOOL)a2;
- (void)deviceBrowser:(id)a0 didRemoveDevice:(id)a1 moreGoing:(BOOL)a2;
- (void)enableDeviceImport;
- (id)filterDuplicates:(id)a0 onSource:(id)a1 library:(id)a2 options:(id)a3 delegate:(id)a4;
- (void)importAssets:(id)a0 fromImportSource:(id)a1 intoLibrary:(id)a2 withOptions:(id)a3 progress:(id *)a4 delegate:(id)a5 performanceDelegate:(id)a6 atEnd:(id /* block */)a7;
- (void)importAssets:(id)a0 fromImportSource:(id)a1 intoLibraryAtURL:(id)a2 withOptions:(id)a3 progress:(id *)a4 delegate:(id)a5 performanceDelegate:(id)a6 atEnd:(id /* block */)a7;
- (void)importAssets:(id)a0 fromImportSource:(id)a1 withOptions:(id)a2 progress:(id *)a3 delegate:(id)a4 atEnd:(id /* block */)a5;
- (void)importEnding;
- (void)importStarting;
- (id)importUrls:(id)a0 intoLibrary:(id)a1 withOptions:(id)a2 delegate:(id)a3 performanceDelegate:(id)a4 atEnd:(id /* block */)a5;
- (id)importUrls:(id)a0 withOptions:(id)a1 delegate:(id)a2 atEnd:(id /* block */)a3;
- (void)removeImportSource:(id)a0;
- (BOOL)sourceIsConnected:(id)a0;

@end
