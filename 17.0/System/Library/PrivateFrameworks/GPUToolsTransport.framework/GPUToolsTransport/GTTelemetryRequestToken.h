@class NSObject;
@protocol GTMTLTelemetryService, OS_dispatch_semaphore;

@interface GTTelemetryRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> *_finished;
    id<GTMTLTelemetryService> _service;
    BOOL _completed;
}

@property (readonly, nonatomic) unsigned long long tokenId;

- (void)completed;
- (void)waitUntilCompleted;
- (void).cxx_destruct;
- (id)initWithService:(id)a0 andTokenId:(unsigned long long)a1;

@end
