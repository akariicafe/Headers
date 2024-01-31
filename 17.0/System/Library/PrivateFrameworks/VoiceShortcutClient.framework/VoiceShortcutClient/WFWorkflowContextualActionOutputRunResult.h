@class NSArray, NSData;

@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowOutputRunResult

@property (readonly, nonatomic) NSArray *files;
@property (readonly, nonatomic) NSData *reversalState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOutput:(id)a0 files:(id)a1 runError:(id)a2 reversalState:(id)a3;

@end
