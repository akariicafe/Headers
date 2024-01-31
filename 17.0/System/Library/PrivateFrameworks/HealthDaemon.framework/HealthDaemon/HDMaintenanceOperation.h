@class NSString;
@protocol HDMaintenanceOperationDelegate;

@interface HDMaintenanceOperation : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startedTime;
    double _timeoutTime;
    NSString *_name;
    id<HDMaintenanceOperationDelegate> _delegate;
    BOOL _hasStarted;
    BOOL _hasFinished;
}

@property (readonly, nonatomic) BOOL isImmediateRequest;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double timeoutTime;
@property (nonatomic) double enqueuedTime;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL faultOnTimeout;

+ (id)maintenanceOperationWithName:(id)a0 asynchronousBlock:(id /* block */)a1;
+ (id)maintenanceOperationWithName:(id)a0 database:(id)a1 asynchronousBlock:(id /* block */)a2;
+ (id)maintenanceOperationWithName:(id)a0 queue:(id)a1 synchronousBlock:(id /* block */)a2;

- (id)init;
- (void)main;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)startWithCompletionDelegate:(id)a0 fromImmediateRequest:(BOOL)a1;

@end
