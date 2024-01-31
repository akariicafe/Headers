@class NSString, PLLibraryServicesManager, NSURL, NSManagedObjectID;

@interface PLDeferredPhotoPendingAssetRecord : NSObject

@property (readonly, copy) NSManagedObjectID *assetObjectID;
@property (readonly) PLLibraryServicesManager *lsm;
@property (readonly, copy) NSString *requestReason;
@property (readonly) BOOL isBackgroundPriority;
@property (readonly) unsigned long long signpostId;
@property (readonly) BOOL expectsSecondProcessingCallback;
@property (readonly) BOOL needsSemanticDevelopment;
@property (readonly, copy) NSURL *fileURLForFullsizeRenderImage;
@property (readonly, copy) NSURL *mainFileURL;
@property (readonly, copy) NSString *logDescription;
@property (readonly) double startTimestamp;
@property (readonly, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithAssetObjectID:(id)a0 lsm:(id)a1 requestReason:(id)a2 isBackgroundPriority:(BOOL)a3 signpostId:(unsigned long long)a4 expectsSecondProcessingCallback:(BOOL)a5 needsSemanticDevelopment:(BOOL)a6 fileURLForFullsizeRenderImage:(id)a7 mainFileURL:(id)a8 logDescription:(id)a9 startTimestamp:(double)a10 completionHandler:(id /* block */)a11;

@end
