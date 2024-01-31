@interface _PFWeakReference : NSObject {
    id _object;
    long long _objectAddress;
}

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
