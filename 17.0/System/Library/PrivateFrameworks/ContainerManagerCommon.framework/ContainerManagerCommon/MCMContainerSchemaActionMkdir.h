@class NSURL;

@interface MCMContainerSchemaActionMkdir : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath> {
    NSURL *_url;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (id)initWithPathArgument:(id)a0 context:(id)a1;

@end
