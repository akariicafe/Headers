@interface NSPortNameServer : NSObject

+ (id)defaultPortNameServer;
+ (id)systemDefaultPortNameServer;

- (id)portForName:(id)a0;
- (id)portForName:(id)a0 host:(id)a1;
- (id)portForName:(id)a0 onHost:(id)a1;
- (BOOL)registerPort:(id)a0 forName:(id)a1;
- (BOOL)registerPort:(id)a0 name:(id)a1;
- (BOOL)removePortForName:(id)a0;

@end
