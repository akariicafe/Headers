@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (const id *)_values;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopy;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (id)copy;
- (Class)classForCoder;
- (id)description;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
