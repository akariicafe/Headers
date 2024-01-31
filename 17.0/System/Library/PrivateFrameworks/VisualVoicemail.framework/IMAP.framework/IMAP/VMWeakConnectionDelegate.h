@class MFConnection;

@interface VMWeakConnectionDelegate : NSObject

@property (weak) MFConnection *weak_connection;

+ (id)forConnection:(id)a0;

- (void).cxx_destruct;
- (void)handleStreamEvent:(unsigned long long)a0;
- (id)initForObj:(id)a0;

@end
