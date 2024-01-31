@class NSString;

@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol> {
    struct CLNotifierClientBase { void /* function */ **x0; } *_client;
}

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;

- (id)initWithClient:(struct CLNotifierClientBase { void /* function */ **x0; } *)a0;
- (void)onNotification:(int)a0 withData:(id)a1;
- (id)init;
- (void)invalidate;

@end
