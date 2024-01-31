@class NSObject;
@protocol OS_nw_connection, OS_nw_activity;

@interface ECNWActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    NSObject<OS_nw_connection> *_currentConnection;
}

+ (void)detachCurrentActivityFromConnection:(id)a0;
+ (void)attachCurrentActivityToConnection:(id)a0;

- (void)startActivity;
- (void).cxx_destruct;
- (id)initWithDomain:(unsigned int)a0 type:(unsigned int)a1;
- (void)stopActivityWithSuccess:(BOOL)a0;

@end
