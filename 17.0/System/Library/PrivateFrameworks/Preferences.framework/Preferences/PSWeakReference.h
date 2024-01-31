@interface PSWeakReference : NSObject <NSCopying> {
    id _location;
}

+ (id)weakReferenceWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)object;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
