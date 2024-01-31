@class NSProgress, PHAsset, PICompositionController, PHContentEditingOutput;

@interface PESaveRequest : NSObject {
    id /* block */ _completionHandler;
    double _beginTimestamp;
    NSProgress *_videoExportProgress;
}

@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) PHAsset *photo;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) unsigned short videoComplementState;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) double progress;

- (id)init;
- (void)_transitionToState:(long long)a0;
- (void).cxx_destruct;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)a0;
- (void)cancelSaveOperation;
- (void)_finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (id)initWithPhoto:(id)a0 compositionController:(id)a1 contentEditingOutput:(id)a2 livePhotoState:(unsigned short)a3 applyVideoOrientationAsMetadata:(BOOL)a4;
- (id)initWithPhoto:(id)a0 contentEditingOutput:(id)a1 livePhotoState:(unsigned short)a2 applyVideoOrientationAsMetadata:(BOOL)a3;
- (id)initWithPhotoToRevertToOriginal:(id)a0 applyVideoOrientationAsMetadata:(BOOL)a1;

@end
