@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)initInternal;
- (id)objectForKey:(id)a0;
- (void)registerDefaults;
- (id)initWithRemoteURL:(id)a0 localURL:(id)a1;
- (void)processPropertyList:(id)a0;

@end
