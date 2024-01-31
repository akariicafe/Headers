@class NSString, geo_isolater, NSObject;
@protocol OS_dispatch_group, OS_xpc_object;

@interface GEOXPCActivity : NSObject {
    BOOL _isScheduled;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    geo_isolater *_isolation;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_group> *initialCheckinGroup;

@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)_checkInActivity:(id)a0 resultHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (void)updateActivities:(id /* block */)a0;
+ (void)resetActivities;
+ (void)addActivity:(id)a0 shouldLaunchDaemon:(BOOL)a1 repeating:(BOOL)a2;
+ (void)cancelActivity:(id)a0;
+ (void)attachToActivity:(id)a0 resultHandler:(id /* block */)a1 handler:(id /* block */)a2;
+ (id)registerActivity:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 handler:(id /* block */)a3;
+ (void)_geod_checkInActivity:(id)a0 group:(id)a1 handler:(id /* block */)a2;
+ (void)clearActivity:(id)a0;

- (BOOL)shouldDeferActivity;
- (void)finishActivity;
- (void)cancelActivity;
- (void)deferActivity;
- (void)_replaceHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 criteria:(id)a1 shouldLaunchDaemon:(BOOL)a2 isAlreadyScheduled:(BOOL)a3 handler:(id /* block */)a4;
- (void)_handleRunActivity:(id)a0;

@end
