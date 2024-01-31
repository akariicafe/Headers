@class SKDiskImage, NSString, SKStateMachine, SKDiskImageResizeParams, NSError, SKDisk, SKDiskImageSizeLimits;

@interface SKDiskImageResizerBase : NSObject <SKCancellableImageOperation>

@property (retain, nonatomic) SKDiskImage *image;
@property (retain, nonatomic) SKDisk *disk;
@property (retain, nonatomic) SKStateMachine *activeFSM;
@property (retain, nonatomic) NSError *resizeError;
@property (nonatomic) unsigned long long cancelPhase;
@property (retain, nonatomic) SKDiskImageResizeParams *resizeParams;
@property (retain, nonatomic) SKDiskImageSizeLimits *limits;
@property (nonatomic) unsigned long long requestedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)cancelWithError:(id *)a0;
- (BOOL)resizeWithError:(id *)a0;
- (id)rollbackResize:(id *)a0;
- (id)attachForResizeParams;
- (id)cancelResize;
- (BOOL)checkLimitsWithError:(id *)a0;
- (id)eventFromSize;
- (id)fitToSize:(id *)a0;
- (id)fsResize:(id *)a0;
- (id)imageResize:(id *)a0;
- (id)initWithDiskImage:(id)a0 limits:(id)a1 resizeParams:(id)a2 error:(id *)a3;
- (id)resizeStateMachine:(id *)a0;

@end
