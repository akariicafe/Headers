@class DYJSScriptingContext;

@interface DYJavaScriptHelperContext : NSObject {
    DYJSScriptingContext *_context;
}

- (id)init;
- (BOOL)evaluateScript:(id)a0;
- (id)evaluateDerivedCounters;
- (BOOL)evaluateScriptCode:(id)a0;
- (void)exportCounterValues:(id)a0;
- (id)generateJavascriptCode:(id)a0 softwareCounterNames:(id)a1 derivedCounterNames:(id)a2;
- (BOOL)prepareCounterNames:(id)a0 softwareCounterNames:(id)a1 derivedCounterNames:(id)a2;
- (BOOL)prepareCounterValues:(id)a0 softwareCounterValues:(id)a1;

@end
