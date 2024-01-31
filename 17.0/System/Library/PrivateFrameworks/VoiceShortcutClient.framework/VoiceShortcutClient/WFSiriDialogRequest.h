@class WFDialogRequest;

@interface WFSiriDialogRequest : WFSiriActionRequest

@property (readonly, nonatomic) WFDialogRequest *dialogRequest;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDialogRequest:(id)a0;

@end
