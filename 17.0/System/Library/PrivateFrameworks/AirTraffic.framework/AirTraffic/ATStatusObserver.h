@class NSString, NSXPCConnection;
@protocol ATStatusObserverDelegate;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL ATCRunning;
@property (nonatomic) BOOL resumed;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id<ATStatusObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (void)fetchAllStatusWithCompletion:(id /* block */)a0;
- (void)updateWithStatus:(id)a0;

@end
