@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) unsigned long long requestResponseCode;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithConfirmationResponseCode:(unsigned long long)a0;
- (id)initWithRequestedOpenURL:(id)a0;

@end
