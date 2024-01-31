@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
    WebScriptObjectPrivate *_private;
}

+ (void)initialize;
+ (BOOL)throwException:(id)a0;
+ (id)_convertValueToObjcValue:(struct JSValue { union EncodedValueDescriptor { long long x0; struct JSCell *x1; struct { int x0; int x1; } x2; } x0; })a0 originRootObject:(void *)a1 rootObject:(void *)a2;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue { } *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;

- (id)stringRepresentation;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)objectAtIndex:(unsigned int)a0;
- (void)setException:(id)a0;
- (id)valueForKey:(id)a0;
- (oneway void)release;
- (void *)_rootObject;
- (void *)_imp;
- (id)JSValue;
- (struct OpaqueJSValue { } *)JSObject;
- (BOOL)_hasImp;
- (void)setWebScriptValueAtIndex:(unsigned int)a0 value:(id)a1;
- (struct OpaqueJSContext { } *)_globalContextRef;
- (id)_initWithJSObject:(void *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;
- (BOOL)_isSafeScript;
- (void *)_originRootObject;
- (void)_setImp:(void *)a0 originRootObject:(void *)a1 rootObject:(void *)a2;
- (void)_setOriginRootObject:(void *)a0 andRootObject:(void *)a1;
- (id)callWebScriptMethod:(id)a0 withArguments:(id)a1;
- (id)evaluateWebScript:(id)a0;
- (BOOL)hasWebScriptKey:(id)a0;
- (void)removeWebScriptKey:(id)a0;
- (id)webScriptValueAtIndex:(unsigned int)a0;

@end
