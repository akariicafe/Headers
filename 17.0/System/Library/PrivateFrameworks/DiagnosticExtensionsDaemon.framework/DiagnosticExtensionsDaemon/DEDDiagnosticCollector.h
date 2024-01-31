@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)init;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (id)extensionForIdentifier:(id)a0;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (BOOL)isDiagnosticExtensionAvailable;
- (id)availableDiagnosticExtensions;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (id)extensionManager;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;

@end
