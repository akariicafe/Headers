@class NSArray, NSString, NSURL, PHContentEditingOutput, PUReviewAsset;
@protocol PXRunNodeDelegate;

@interface PUReviewAdjustmentURLNode : PXRunNode <PUAdjustmentURLNode>

@property (readonly, nonatomic) NSURL *directory;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) NSURL *adjustmentURL;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)initWithReviewAsset:(id)a0 directory:(id)a1 contentEditingOutput:(id)a2;

@end
