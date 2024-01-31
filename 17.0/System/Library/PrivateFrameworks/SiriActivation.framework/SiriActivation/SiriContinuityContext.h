@class NSDictionary, AFRequestInfo, NSNumber;

@interface SiriContinuityContext : SiriContext {
    NSNumber *_isTemporaryDevice;
}

@property (readonly, nonatomic) AFRequestInfo *requestInfo;
@property (readonly, nonatomic) NSDictionary *userActivity;

+ (BOOL)supportsSecureCoding;

- (BOOL)isTemporaryDevice;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (id)description;
- (id)initWithSpeechRequestOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestInfo:(id)a0;
- (id)speechRequestOptions;

@end
