@class WFContentCollection;

@interface WFActionDidRunTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) WFContentCollection *output;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 output:(id)a1;

@end
