@class NSError, WFContentCollection;

@interface WFShowPasswordsAction : WFAction

- (id)init;
- (void).cxx_destruct;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
