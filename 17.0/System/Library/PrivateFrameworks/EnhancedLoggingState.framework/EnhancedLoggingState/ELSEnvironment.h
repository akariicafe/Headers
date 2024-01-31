@interface ELSEnvironment : NSObject

+ (id)sharedEnvironment;

- (void)setServer:(unsigned long long)a0;
- (unsigned long long)server;
- (id)_defaults;
- (id)_toASTServerNumber:(unsigned long long)a0;

@end
