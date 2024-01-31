@class NSObject;
@protocol OS_dispatch_queue, CMPickupDelegate;

@interface CMPickupManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *fDispatcher;
}

@property (nonatomic) id<CMPickupDelegate> delegate;

+ (BOOL)isPickupAvailable;

- (id)init;
- (void)dealloc;
- (void)onPickupStateUpdated:(const struct Sample { unsigned char x0; double x1; } *)a0;
- (void)startPickupUpdates;
- (void)stopPickupUpdates;

@end
