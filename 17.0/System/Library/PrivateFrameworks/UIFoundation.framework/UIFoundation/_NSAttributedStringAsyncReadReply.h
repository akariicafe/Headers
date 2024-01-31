@class NSXPCConnection;

@interface _NSAttributedStringAsyncReadReply : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) id /* block */ reply;
@property (readonly, nonatomic) BOOL delivered;

+ (id)readReplyWithConnection:(id)a0 reply:(id /* block */)a1;

- (void)dealloc;
- (void)cancelWithError:(id)a0;
- (void)deliverAttributedString:(id)a0 documentAttributes:(id)a1 error:(id)a2;

@end
