@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;

@end
