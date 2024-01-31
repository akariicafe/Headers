@interface CalCFPreferencesStore : NSObject <CalPreferencesStore>

+ (id)shared;

- (BOOL)getInteger:(long long *)a0 forDomain:(id)a1 key:(id)a2;
- (BOOL)getValue:(id *)a0 forDomain:(id)a1 key:(id)a2;
- (void)synchronizeDomain:(id)a0;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (BOOL)getBoolean:(BOOL *)a0 forDomain:(id)a1 key:(id)a2;

@end
