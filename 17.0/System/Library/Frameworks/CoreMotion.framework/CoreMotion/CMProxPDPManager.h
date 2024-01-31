@interface CMProxPDPManager : NSObject

@property (readonly, nonatomic) id _internal;

+ (BOOL)isAvailable;

- (id)init;
- (void)dealloc;
- (void)startPDPUpdatesWithHandler:(id /* block */)a0;

@end
