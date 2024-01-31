@class NSString, CMPedestrianFenceManager;

@interface IRCMPDRFenceBridge : NSObject

@property (retain, nonatomic) CMPedestrianFenceManager *fenceManager;
@property (retain, nonatomic) NSString *fenceIdentifier;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL isFenceActive;
@property (nonatomic) BOOL isSessionStarted;

+ (BOOL)isAvailable;

- (void)endSession;
- (void).cxx_destruct;
- (void)startSession;
- (void)clearFence;
- (id)initWithFenceIdentifier:(id)a0;
- (void)setFence:(float)a0 withCompletion:(id /* block */)a1;

@end
