@interface IntelligencePlatform.KnosisServer : NSObject {
    void /* unknown type, empty encoding */ operators;
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ intentHandler;
    void /* unknown type, empty encoding */ indexHandler;
    void /* unknown type, empty encoding */ defaultResultLimit;
}

+ (id)initWithEntitySubgraphView;

- (id)executeIntentsWithGraphObjectContextWithRequest:(id)a0;
- (id)executeIntentsWithRequest:(id)a0;
- (id)executeKGQWithGraphObjectContextWithRequest:(id)a0;
- (id)executeKGQWithRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
