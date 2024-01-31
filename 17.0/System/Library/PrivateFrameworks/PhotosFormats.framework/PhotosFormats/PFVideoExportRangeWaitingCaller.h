@class NSObject;
@protocol OS_dispatch_semaphore;

@interface PFVideoExportRangeWaitingCaller : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property struct _NSRange { unsigned long long location; unsigned long long length; } requestedRange;
@property BOOL requestedRangeIsAvailable;
@property BOOL cancelled;

+ (id)waitingCallerWithRequestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)init;
- (void)waitWithTimeout:(unsigned long long)a0;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)canResumeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
