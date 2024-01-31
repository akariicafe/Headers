@class TRSession, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface TROperation : NSOperation

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TRSession *session;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)userCancelledError;

- (id)initWithSession:(id)a0;
- (void)finishWithResult:(id)a0;
- (void)main;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;

@end
