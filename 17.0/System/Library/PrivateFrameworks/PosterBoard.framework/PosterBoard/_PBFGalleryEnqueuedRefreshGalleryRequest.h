@class NSUUID, ATXFaceGalleryConfiguration, NSError, NSMutableArray, NSDate;

@interface _PBFGalleryEnqueuedRefreshGalleryRequest : NSObject {
    unsigned long long _options;
    long long _powerLogReason;
    NSMutableArray *_completionHandlers;
    NSError *_finalizedError;
    ATXFaceGalleryConfiguration *_finalizedGalleryConfiguration;
    NSDate *_finalizedLastUpdateDate;
    BOOL _finalizedDidUpdate;
}

@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;
@property (copy, nonatomic) NSUUID *sessionId;

- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fireCompletionHandlersWithError:(id)a0 faceGalleryConfiguration:(id)a1 lastUpdateDate:(id)a2 didUpdate:(BOOL)a3;
- (id)initWithOptions:(unsigned long long)a0 powerLogReason:(long long)a1 sessionId:(id)a2;

@end
