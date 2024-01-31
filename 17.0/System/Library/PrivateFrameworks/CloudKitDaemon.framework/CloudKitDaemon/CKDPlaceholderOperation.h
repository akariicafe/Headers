@class NSObject, NSString, NSOperationQueue, NSDate, CKDContainer, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)isExecuting;
- (id)_startDateString;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (void)transitionToFinished;
- (id)ckShortDescription;
- (void)transitionToExecuting;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (void)cancel;
- (BOOL)isConcurrent;

@end
