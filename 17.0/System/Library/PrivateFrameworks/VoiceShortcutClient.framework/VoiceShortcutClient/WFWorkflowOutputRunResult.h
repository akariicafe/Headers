@class NSData, WFContentCollection;

@interface WFWorkflowOutputRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSData *archivedOutput;
@property (retain, nonatomic) WFContentCollection *cachedOutput;
@property (readonly, nonatomic) BOOL hasOutput;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOutput:(id)a0;
- (void)getOutputWithCompletionHandler:(id /* block */)a0;
- (void)generateOutputFromRepresentation:(id)a0 withCompletion:(id /* block */)a1;
- (id)generateRepresentationFromOutput:(id)a0;
- (id)initWithOutput:(id)a0 runError:(id)a1;
- (id)resultBySettingError:(id)a0;
- (id)unableToDecodeError;

@end
