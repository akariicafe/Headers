@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
