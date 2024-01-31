@class LNSnippetEnvironment;

@interface WFLinkSnippetEnvironmentDialogResponse : WFDialogResponse

@property (readonly, copy, nonatomic) LNSnippetEnvironment *environment;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithEnvironment:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCancelled:(BOOL)a0;

@end
