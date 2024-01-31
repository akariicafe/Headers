@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {
    NSConcreteNotifyingMutableAttributedString *_contents;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    struct { unsigned char _forceFixAttributes : 1; unsigned char _needLock : 1; unsigned char _lockInitialized : 1; unsigned char _inFixingAttributes : 1; unsigned int _reserved : 28; } _pFlags;
}

+ (unsigned long long)_writerCountTSDKey;

- (void)_markIntentsResolved;
- (void)_setForceFixAttributes:(BOOL)a0;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)dealloc;
- (BOOL)_mayRequireIntentResolution;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_attributeFixingInProgress;
- (BOOL)_lockForReading;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)length;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)_initLocks;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (BOOL)_forceFixAttributes;
- (id)initWithAttributedString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)fixesAttributesLazily;
- (Class)classForCoder;
- (void)_unlock;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (id)string;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0;

@end
