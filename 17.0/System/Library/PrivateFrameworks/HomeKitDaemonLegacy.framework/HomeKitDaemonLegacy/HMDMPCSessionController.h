@class NSOperationQueue;
@protocol HMMLogEventSubmitting;

@interface HMDMPCSessionController : HMFObject

@property (readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;

- (void).cxx_destruct;
- (void)executeSessionWithSessionData:(id)a0 completion:(id /* block */)a1;
- (id)initWithLogEventSubmitter:(id)a0;

@end
