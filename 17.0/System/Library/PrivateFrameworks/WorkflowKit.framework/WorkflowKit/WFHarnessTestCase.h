@class NSString, WFContentCollection, NSSet, WFHarnessTestResultExpectation, WFWorkflowRunDescriptor, NSMutableSet;

@interface WFHarnessTestCase : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WFWorkflowRunDescriptor *runDescriptor;
@property (readonly, nonatomic) WFContentCollection *input;
@property (readonly, copy, nonatomic) NSString *automationType;
@property (readonly, copy, nonatomic) NSSet *interactions;
@property (readonly, copy, nonatomic) NSSet *siriInteractions;
@property (readonly, copy, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) WFHarnessTestResultExpectation *resultExpectation;
@property (readonly, nonatomic) NSMutableSet *handledInteractions;
@property (readonly, nonatomic) NSMutableSet *handledSiriInteractions;
@property (readonly, nonatomic) NSMutableSet *handledConditions;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 workflowRunDescriptor:(id)a2 input:(id)a3 automationType:(id)a4 interactions:(id)a5 siriInteractions:(id)a6 conditions:(id)a7 resultExpectation:(id)a8;

@end
