@class NSString;

@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate> {
    struct OpaqueFigCaptureDeferredPhotoProcessor { } *_deferredPhotoProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 failedWithError:(int)a1;
- (void)immediateTermination;
- (id)initWithFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { } *)a0;
- (void)job:(id)a0 completedWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)job:(id)a0 failedWithError:(int)a1;

@end
