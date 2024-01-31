@class geo_isolater, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestThrottler : NSObject {
    geo_isolater *_isolater;
    NSMutableDictionary *_enqueuedTickets;
    BOOL _isSubmitting;
    double _nextSubmissionTime;
    NSObject<OS_dispatch_source> *_submissionTimer;
}

+ (id)sharedThrottler;

- (id)init;
- (void)_scheduleTimer:(double)a0;
- (void).cxx_destruct;
- (void)cancelTicket:(id)a0;
- (void)enqueueTicket:(id)a0 submissionHandler:(id /* block */)a1;
- (void)submitTickets;

@end
