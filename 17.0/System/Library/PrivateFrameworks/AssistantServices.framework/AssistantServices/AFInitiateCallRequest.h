@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)call;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithCall:(id)a0;
- (id)createResponse;

@end
