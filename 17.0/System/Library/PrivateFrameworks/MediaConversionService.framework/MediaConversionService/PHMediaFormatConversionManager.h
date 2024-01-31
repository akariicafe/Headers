@class PHMediaFormatConversionJob, NSURL, NSMutableArray, NSObject;
@protocol PHMediaFormatConversionImplementation, OS_dispatch_queue;

@interface PHMediaFormatConversionManager : NSObject {
    id /* block */ _transferBehaviorUserPreferenceOverride;
}

@property unsigned long long state;
@property (retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation;
@property (retain) NSMutableArray *queuedJobs;
@property (retain) PHMediaFormatConversionJob *currentlyProcessingJob;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSObject<OS_dispatch_queue> *preflightQueue;
@property (retain, nonatomic) NSURL *directoryForTemporaryFiles;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)enqueueConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)preflightConversionRequest:(id)a0;
- (void)cancellationRequestedForJob:(id)a0;
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)a0;
- (id)jobForConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)preflightAllRelatedRequestsForCurrentJob;
- (void)preflightConversionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processQueuedJobs;
- (id)rootAncestorRequestForRequest:(id)a0;
- (void)setTransferBehaviorUserPreferenceOverride:(id /* block */)a0;
- (void)setupConversionImplementation;
- (id)ut_objectsToBeDeallocatedWithReceiver;
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)a0;

@end
