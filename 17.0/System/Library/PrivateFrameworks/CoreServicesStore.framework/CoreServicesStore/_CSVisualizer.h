@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject <NSCopying> {
    NSMutableDictionary *_functions;
    NSRecursiveLock *_lock;
}

@property (readonly) struct __CSStore { } *store;
@property (readonly) NSMutableDictionary *userInfo;

+ (id)new;
+ (id)URLForUnit:(unsigned int)a0 inTable:(unsigned int)a1;
+ (void)enumerateValuesForTitlesInDescription:(id)a0 block:(id /* block */)a1;
+ (void)breakDownTable:(const struct Table { struct Unit { unsigned int x0 : 30; unsigned char x1 : 2; unsigned int x2; char x3[0]; } x0; char x1[48]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *)a0 inStore:(const void *)a1 buffer:(char *)a2;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)a0 block:(id /* block */)a1;
+ (BOOL)getUnit:(unsigned int *)a0 inTable:(unsigned int *)a1 fromURL:(id)a2;
+ (id)predicateForSearchingDescriptionWithString:(id)a0 error:(id *)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfValueForTitle:(id)a0 inDescription:(id)a1;
+ (BOOL)unitDescription:(id)a0 referencesUnit:(unsigned int)a1 inTable:(unsigned int)a2;

- (id)init;
- (void)dealloc;
- (id)initWithStore:(struct __CSStore { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionOfUnit:(unsigned int)a0 inTable:(unsigned int)a1;
- (id)initWithStore:(struct __CSStore { } *)a0 useStandardTableFunctions:(BOOL)a1;
- (void)setFunctions:(id)a0 forTable:(unsigned int)a1;
- (id)breakDownUsage;
- (void)enumerateReferencesToUnit:(unsigned int)a0 inTable:(unsigned int)a1 block:(id /* block */)a2;
- (id)functionsForTable:(unsigned int)a0;
- (id)functionsForTableNoCopy:(unsigned int)a0;
- (id /* block */)handlerForTable:(unsigned int)a0;
- (id)initWithStore:(struct __CSStore { } *)a0 useStandardTableHandlers:(BOOL)a1;
- (void)setHandler:(id /* block */)a0 forTable:(unsigned int)a1;
- (void)setStandardTableFunctions;
- (void)setStandardTableHandlers;
- (id)summaryOfUnit:(unsigned int)a0 inTable:(unsigned int)a1;

@end
