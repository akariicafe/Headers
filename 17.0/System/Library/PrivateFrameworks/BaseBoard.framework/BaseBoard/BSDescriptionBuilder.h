@class NSString, NSMutableString;
@protocol NSObject;

@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting> {
    id<NSObject> _object;
    NSMutableString *_proem;
    NSMutableString *_description;
}

@property (nonatomic) int activeComponent;
@property (retain, nonatomic) NSString *activeMultilinePrefix;
@property (nonatomic) BOOL useDebugDescription;

+ (id)descriptionForObject:(id)a0;
+ (id)builderWithObject:(id)a0;
+ (id)succinctDescriptionForObject:(id)a0;
+ (id)nameObjectSeparator;
+ (id)descriptionForObject:(id)a0 withObjectsAndNames:(id)a1;
+ (id)componentSeparator;

- (id)initWithObject:(id)a0;
- (id)appendKey:(id)a0;
- (id)appendKeys:(id)a0;
- (id)build;
- (id)appendString:(id)a0;
- (id)appendObject:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (id)appendFormat:(id)a0;
- (id)appendUnsignedInteger:(unsigned long long)a0 withName:(id)a1;
- (void)appendArraySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3;
- (void)appendArraySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3 objectTransformer:(id /* block */)a4;
- (void)appendArraySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (void)appendBodySectionWithName:(id)a0 multilinePrefix:(id)a1 block:(id /* block */)a2;
- (id)appendBool:(BOOL)a0 withName:(id)a1;
- (id)appendBool:(BOOL)a0 withName:(id)a1 ifEqualTo:(BOOL)a2;
- (id)appendClass:(Class)a0 withName:(id)a1;
- (void)appendCustomFormatWithName:(id)a0 block:(id /* block */)a1;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (id)appendDouble:(double)a0 withName:(id)a1 decimalPrecision:(unsigned long long)a2;
- (id)appendFloat:(double)a0 withName:(id)a1;
- (id)appendFloat:(double)a0 withName:(id)a1 decimalPrecision:(unsigned long long)a2;
- (id)appendInt:(int)a0 withName:(id)a1;
- (id)appendInteger:(long long)a0 withName:(id)a1;
- (id)appendObject:(id)a0 withName:(id)a1 skipIfNil:(BOOL)a2;
- (id)appendPoint:(struct CGPoint { double x0; double x1; })a0 withName:(id)a1;
- (id)appendPointer:(void *)a0 withName:(id)a1;
- (void)appendProem:(id)a0 block:(id /* block */)a1;
- (id)appendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withName:(id)a1;
- (id)appendSize:(struct CGSize { double x0; double x1; })a0 withName:(id)a1;
- (void)appendString:(id)a0 withName:(id)a1;
- (void)appendString:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (id)appendTimeInterval:(double)a0 withName:(id)a1 decomposeUnits:(BOOL)a2;
- (id)appendUInt64:(unsigned long long)a0 withName:(id)a1;
- (id)appendUnsignedInteger:(unsigned long long)a0 withName:(id)a1 format:(long long)a2;
- (id)modifyBody:(id /* block */)a0;
- (id)modifyProem:(id /* block */)a0;
- (void)appendArraySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2 objectTransformer:(id /* block */)a3;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3;
- (id)appendUInt64:(unsigned long long)a0 withName:(id)a1 format:(long long)a2;
- (id)appendUnsignedInt:(unsigned int)a0 withName:(id)a1;
- (id)appendVersionedPID:(long long)a0 withName:(id)a1;
- (id)appendCString:(const char *)a0 withName:(id)a1;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3 objectTransformer:(id /* block */)a4;
- (id)appendFlag:(long long)a0 withName:(id)a1;
- (id)appendFlag:(long long)a0 withName:(id)a1 skipIfNotSet:(BOOL)a2;
- (id)appendInt64:(long long)a0 withName:(id)a1;
- (id)appendObjectsAndNames:(id)a0;
- (id)appendQueue:(id)a0 withName:(id)a1;
- (id)appendSelector:(SEL)a0 withName:(id)a1;
- (id)appendSuper;

@end
