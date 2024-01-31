@interface IOAccessorySystemStateEndpoint : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connection;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (void)notifyUserActive:(BOOL)a0;
- (void)notifyUserPresent:(BOOL)a0;

@end
