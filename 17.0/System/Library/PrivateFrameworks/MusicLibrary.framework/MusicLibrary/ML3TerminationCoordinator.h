@class NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3TerminationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (class, readonly, nonatomic) ML3TerminationCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL isSigned;

- (id)init;
- (void)dealloc;
- (void)execute;
- (void)secedeForReason:(long long)a0;
- (BOOL)isSignedForReason:(long long)a0;
- (void)_performTermination;
- (void).cxx_destruct;
- (void)signForReason:(long long)a0;

@end
