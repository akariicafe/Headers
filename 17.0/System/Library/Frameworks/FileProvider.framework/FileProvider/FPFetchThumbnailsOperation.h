@class NSString, NSMutableDictionary, NSOperationQueue, NSMutableArray, FPItemManager;

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate> {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_appLibraryItems;
    NSMutableArray *_placeHoldersItems;
    struct CGSize { double width; double height; } _desiredSize;
    double _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
}

@property (copy, nonatomic) id /* block */ perThumbnailCompletionBlock;
@property (copy, nonatomic) id /* block */ perThumbnailWithVersionCompletionBlock;
@property (copy, nonatomic) id /* block */ thumbnailsFetchCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)_perItemCompletionBlockFor:(id)a0 version:(id)a1 thumbnailURL:(id)a2 thumbnailData:(id)a3 contentType:(id)a4 metadata:(id)a5 error:(id)a6;
- (id)initWithItem:(id)a0 versions:(id)a1 desiredSize:(struct CGSize { double x0; double x1; })a2 screenScale:(double)a3 itemManager:(id)a4;
- (id)initWithItems:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2 itemManager:(id)a3;
- (void)operation:(id)a0 didReceiveProgressInfo:(id)a1 error:(id)a2;

@end
