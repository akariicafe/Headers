@class NSString, NSObject;
@protocol OS_xpc_object;

@interface BMXPCActivity : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) NSString *activityName;

- (BOOL)shouldDefer;
- (long long)_state;
- (void).cxx_destruct;
- (BOOL)didDefer;
- (id)initWithActivity:(id)a0 activityName:(id)a1;
- (id)initWithActivity:(id)a0;
- (BOOL)setDone;
- (BOOL)_setDefer;
- (BOOL)setContinue;

@end
