@interface NSMachBootstrapServer : NSPortNameServer

+ (id)sharedInstance;

- (id)portForName:(id)a0;
- (id)portForName:(id)a0 host:(id)a1;
- (id)portForName:(id)a0 options:(unsigned long long)a1;
- (BOOL)registerPort:(id)a0 name:(id)a1;
- (BOOL)removePortForName:(id)a0;
- (id)servicePortWithName:(id)a0;

@end
