@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)createUsageResult;
- (id)draftMessageIdentifier;

@end
