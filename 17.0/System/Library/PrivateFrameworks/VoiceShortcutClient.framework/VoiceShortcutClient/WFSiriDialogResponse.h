@class WFDialogResponse;

@interface WFSiriDialogResponse : WFSiriActionResponse

@property (readonly, nonatomic) WFDialogResponse *dialogResponse;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDialogResponse:(id)a0;

@end
