@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest {
    STEmailMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithMessage:(id)a0;
- (BOOL)_makeAppFrontmost;
- (id)createResponse;

@end
