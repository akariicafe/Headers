@class NSString, NSError, WFContentCollection;

@interface WFSetAirDropReceivingAction : WFAction {
    void /* unknown type, empty encoding */ discoveryController;
}

@property (nonatomic, readonly) NSString *descriptionSummary;

- (id)init;
- (void).cxx_destruct;
- (void)runWithInput:(WFContentCollection *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;

@end
