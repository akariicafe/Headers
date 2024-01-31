@class NSString, MSVBlockGuard, NSObject;
@protocol OS_dispatch_queue;

@interface MPCDeferrableTask : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) MSVBlockGuard *guard;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL deallocating;

- (void)dealloc;
- (void)execute:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)taskDidExecute;

@end
