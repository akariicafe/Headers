@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}

+ (id)world;
+ (id)standardWorld;
+ (id)findOrCreateWorld:(void *)a0;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { } *)a0;
+ (id)scriptWorldForJavaScriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (void)unregisterWorld;
- (id)initWithWorld:(void *)a0;

@end
