@class NSString, NSObject;
@protocol OS_os_transaction;

@interface BGSystemTask : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL suspending;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ expirationHandler;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setTaskCompleted;
- (BOOL)suspendTaskForDuration:(double)a0;

@end
