@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (BOOL)isSupported;

- (id)init;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (void)fetchGeomagneticModelData:(id /* block */)a0;
- (void *)adaptee;
- (void)beginService;
- (void)doAsync:(id /* block */)a0;
- (void)endService;

@end
