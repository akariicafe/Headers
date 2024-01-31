@class NSString, MRGameControllerDelayedEvents, NSXPCConnection;

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener> {
    NSXPCConnection *_connection;
    MRGameControllerDelayedEvents *_delayedEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGameControllerDaemonProxy;

- (void)controllerWithUDID:(unsigned long long)a0 setData:(id)a1;
- (void)microControllerWithUDID:(unsigned long long)a0 setDigitizerX:(float)a1 digitizerY:(float)a2 withTimeStamp:(unsigned long long)a3 touchDown:(BOOL)a4;
- (void)removeController:(id)a0;
- (void)controllerWithUDID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2;
- (void)addController:(id)a0;
- (void)microControllerWithDigitizerX:(float)a0 withY:(float)a1 withTimeStamp:(unsigned long long)a2 touchDown:(BOOL)a3;
- (void)_openConnection;
- (void).cxx_destruct;
- (BOOL)_delayEvent:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2 withUpDelay:(double)a3;
- (id)addEmulatedControllerWithProperties:(id)a0;
- (void)controllerID:(unsigned long long)a0 setArrayValueX:(float)a1 y:(float)a2 z:(float)a3 w:(float)a4 forElement:(int)a5;
- (void)controllerID:(unsigned long long)a0 setDigitizerX:(float)a1 digitizerY:(float)a2 withTimeStamp:(unsigned long long)a3 touchDown:(BOOL)a4;
- (void)controllerID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2;
- (void)controllerID:(unsigned long long)a0 setValue:(float)a1 forElement:(int)a2 withUpDelay:(double)a3;
- (void)removeEmulatedController:(id)a0;
- (void)replyConnectedHosts:(id)a0;

@end
