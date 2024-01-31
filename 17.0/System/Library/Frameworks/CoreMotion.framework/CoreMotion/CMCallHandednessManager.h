@class NSObject;
@protocol CMCallHandednessDelegate, OS_dispatch_queue;

@interface CMCallHandednessManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *fDispatcher;
}

@property (nonatomic) id<CMCallHandednessDelegate> delegate;

+ (BOOL)isCallHandednessAvailable;

- (id)init;
- (void)dealloc;
- (void)onCallHandednessStateUpdated:(const struct Sample { unsigned char x0; double x1; } *)a0;
- (void)stopCallHandednessUpdates;
- (void)startCallHandednessUpdates;

@end
