@class NSData, WFWorkflowRunningContext, WFWorkflowRunDescriptor;

@interface WFPausedShortcutData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *contextData;
@property (retain, nonatomic) NSData *descriptorData;
@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 descriptor:(id)a1;

@end
