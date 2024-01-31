@class NSValue, NSString, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface MKConnection : NSObject

@property (nonatomic) NSObject<OS_nw_connection> *connection;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSValue *identifier;
@property (copy, nonatomic) NSString *hostname;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queue:(id)a1 hostname:(id)a2;

@end
