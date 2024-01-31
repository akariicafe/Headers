@class NSString, NSObject;
@protocol OS_xpc_object;

@interface MAXpcConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSString *connectionId;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)notValid;

@end
