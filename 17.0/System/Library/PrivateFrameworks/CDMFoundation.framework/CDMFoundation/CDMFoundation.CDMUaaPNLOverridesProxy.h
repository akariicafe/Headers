@interface CDMFoundation.CDMUaaPNLOverridesProxy : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ overrideParseProbability;
    void /* unknown type, empty encoding */ uaaPOverridesLog;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addWithCollection:(id)a0;
- (BOOL)cleanWithOverrideNamespace:(int)a0;
- (id)initWithUseMemory:(BOOL)a0;
- (id)matchWithInputs:(id)a0 overrideNamespace:(int)a1;

@end
