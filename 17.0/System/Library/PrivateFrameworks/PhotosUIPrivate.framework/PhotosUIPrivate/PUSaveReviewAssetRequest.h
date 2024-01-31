@class PUReviewCreateAssetNode, NSString, PUVideoExportNode, NSURL, PICompositionController, PUEditableMediaProvider, PHContentEditingOutput;
@protocol PUEditableAsset;

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate> {
    id /* block */ _completionHandler;
    double _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
}

@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider;
@property (readonly, nonatomic) id<PUEditableAsset> editableAsset;
@property (readonly, nonatomic) NSURL *directory;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) long long workImageVersion;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_transitionToState:(long long)a0;
- (void).cxx_destruct;
- (void)runNode:(id)a0 didCancelWithError:(id)a1;
- (void)runNode:(id)a0 didCompleteWithError:(id)a1;
- (void)_finishWithAsset:(id)a0 error:(id)a1;
- (void)_handleOutputNodeFinishedWithError:(id)a0;
- (long long)_imageRequestVersion;
- (void)_performInternalSaveOperation;
- (void)_performSaveOperation;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)a0;
- (void)cancelSaveOperation;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 compositionController:(id)a3 contentEditingOutput:(id)a4 workImageVersion:(long long)a5;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 compositionController:(id)a3 workImageVersion:(long long)a4;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 contentEditingOutput:(id)a3 workImageVersion:(long long)a4;
- (id)initWithAssetForRevertToOriginal:(id)a0 mediaProvider:(id)a1 directory:(id)a2;

@end
