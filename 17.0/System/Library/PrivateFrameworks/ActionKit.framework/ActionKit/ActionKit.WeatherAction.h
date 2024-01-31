@class NSError, WFContentCollection;

@interface ActionKit.WeatherAction : WFAction {
    void /* unknown type, empty encoding */ mapItemForTesting;
}

- (id)init;
- (void).cxx_destruct;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
