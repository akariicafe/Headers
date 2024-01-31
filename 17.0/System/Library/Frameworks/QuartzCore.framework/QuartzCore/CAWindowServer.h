@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; unsigned int x1; id /* block */ x2; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id /* block */ slotDeletionCallback;

+ (id)server;
+ (id)context;
+ (id)contextWithOptions:(id)a0;
+ (id)serverWithOptions:(id)a0;
+ (id)serverIfRunning;
+ (void)stopServer;

- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (id)init;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (void)dealloc;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)_init;
- (id)displayWithUniqueId:(id)a0;
- (void)addDisplay:(id)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (BOOL)isSlotValid:(unsigned int)a0;
- (void)_detectDisplays;
- (void)removeDisplay:(id)a0;
- (id)description;
- (id)secureModeViolations;
- (id)insecureProcessIds;
- (id)displayWithName:(id)a0;
- (void)removeAllDisplays;

@end
