@interface SSWeakReference : NSObject {
    id _object;
    unsigned long long _objectAddress;
}

@property (readonly, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
