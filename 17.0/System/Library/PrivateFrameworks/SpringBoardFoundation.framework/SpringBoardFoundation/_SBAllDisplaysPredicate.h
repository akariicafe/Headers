@interface _SBAllDisplaysPredicate : SBDisplayModePredicate

+ (id)sharedInstance;
+ (id)fromDefaultsKey:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;

@end
