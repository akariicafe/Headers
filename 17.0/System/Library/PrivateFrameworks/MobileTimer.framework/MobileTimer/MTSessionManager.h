@class MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, NSString, MTSessionManagerExportedObject;

@interface MTSessionManager : NSObject <MTUserDefaultNotificationObserver>

@property (retain, nonatomic) MTSessionManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;

- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (void)reconnect;
- (void)checkIn;
- (id)init;
- (void)dealloc;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void).cxx_destruct;
- (id)initWithMetrics:(id)a0;
- (void)endAlertingSession;

@end
