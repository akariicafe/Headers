@interface Feedback.FBKFeedbackForm : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ answers;
    void /* unknown type, empty encoding */ authenticationMethod;
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ attachmentDescriptors;
    void /* unknown type, empty encoding */ localizedAttachmentLegalText;
    void /* unknown type, empty encoding */ sandboxExtensionAttachments;
    void /* unknown type, empty encoding */ formId;
    void /* unknown type, empty encoding */ plugFormIds;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ appToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
