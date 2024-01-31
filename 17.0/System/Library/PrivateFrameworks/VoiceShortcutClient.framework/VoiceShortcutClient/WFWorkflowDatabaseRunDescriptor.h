@class NSString;

@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
