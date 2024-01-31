@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)retain;
- (void)dealloc;
- (id)redactedDescription;
- (unsigned long long)retainCount;
- (id)bundle;
- (void)encodeWithCoder:(id)a0;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)key;
- (Class)classForCoder;
- (id)table;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)_realizedString;

@end
