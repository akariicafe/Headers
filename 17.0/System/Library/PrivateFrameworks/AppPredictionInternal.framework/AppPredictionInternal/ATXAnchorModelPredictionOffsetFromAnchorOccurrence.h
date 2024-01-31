@interface ATXAnchorModelPredictionOffsetFromAnchorOccurrence : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double startSecondsAfterAnchor;
@property (readonly, nonatomic) double endSecondsAfterAnchor;

- (id)init;
- (unsigned long long)hash;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSecondsAfterAnchor:(double)a0 endSecondsAfterAnchor:(double)a1;

@end
