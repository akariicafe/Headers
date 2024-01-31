@class NSString;

@interface WFWorkflowRunDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *kind;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
