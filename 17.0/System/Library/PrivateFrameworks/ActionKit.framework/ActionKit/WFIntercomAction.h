@class NSError, WFContentCollection;

@interface WFIntercomAction : WFAction {
    void /* unknown type, empty encoding */ homeParameterKey;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speechSynthesizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_announce;
}

- (id)init;
- (void).cxx_destruct;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
