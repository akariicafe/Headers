@class NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface SKSyncCommand : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)onCallbackWithError:(id)a0;
- (BOOL)waitAndReturnWithError:(id *)a0;

@end
