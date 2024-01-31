@class NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)createConnection;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)a0 aroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 inRadius:(double)a2 allowNetwork:(BOOL)a3 WithReply:(id /* block */)a4;

@end
