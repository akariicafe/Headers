@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (id)initWithPlugIn:(id)a0;

@end
