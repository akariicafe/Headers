@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithPersonality:(id)a0;
- (void).cxx_destruct;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;

@end
