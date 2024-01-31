@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (id)retain;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)bitmapRepresentation;
- (id)replacementObjectForCoder:(id)a0;
- (id)invertedSet;
- (BOOL)_isDeallocating;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)isEmpty;
- (void)_expandInverted;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
