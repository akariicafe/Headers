@class NSArray, NSProgress, NSOperationQueue, NSMutableArray;

@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient> {
    struct CGSize { double width; double height; } _desiredSize;
    double _screenScale;
    NSMutableArray *_appBundleIDsNotFound;
}

@property (class, readonly) NSOperationQueue *sharedOperationQueue;

@property (nonatomic) BOOL allowLocalLookup;
@property (nonatomic) BOOL allowAppStoreLookup;
@property (readonly, nonatomic) NSArray *appBundleIDs;
@property (readonly, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ perAppBundleCompletion;

- (void)main;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_checkIsNotPrefixedByTeamID:(id)a0;
- (BOOL)_checkTypeIsValid:(id)a0;
- (void)_perAppBundleCompletion:(id)a0 iconData:(id)a1 contentType:(id)a2 error:(id)a3;
- (void)_retrieveIconsFromAppStore;
- (void)_retrieveIconsFromLocalDevice;
- (void)_verifyAppBundleIDsFormat;
- (id)initWithAppBundleIDs:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2;

@end
