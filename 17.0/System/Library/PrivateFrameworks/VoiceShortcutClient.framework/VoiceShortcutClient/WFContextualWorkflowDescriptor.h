@class WFWorkflowDescriptor;
@protocol WFPropertyListObject;

@interface WFContextualWorkflowDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFWorkflowDescriptor *descriptor;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescriptor:(id)a0 serializedRepresentation:(id)a1;

@end
