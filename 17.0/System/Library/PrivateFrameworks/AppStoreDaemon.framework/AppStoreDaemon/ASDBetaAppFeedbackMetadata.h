@class NSString, ASDBetaAppVersion;

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *incidentID;
@property (copy) NSString *email;
@property (copy) ASDBetaAppVersion *version;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
