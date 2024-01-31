@class NSObject;
@protocol GTMTLReplayService, OS_dispatch_semaphore;

@interface GTReplayRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_finished;
    id<GTMTLReplayService> _replayer;
}

@property (readonly, nonatomic) unsigned long long tokenId;

- (void)completed;
- (void)waitUntilCompleted;
- (BOOL)pause;
- (BOOL)resume;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithService:(id)a0 andTokenId:(unsigned long long)a1;

@end
