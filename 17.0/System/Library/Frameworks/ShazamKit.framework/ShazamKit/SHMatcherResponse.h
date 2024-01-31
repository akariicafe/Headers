@class SHSignature, SHMatch, NSUUID, NSError;

@interface SHMatcherResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double recordingIntermission;
@property (readonly, nonatomic) double retrySeconds;
@property (readonly, nonatomic) SHMatch *match;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) SHSignature *signature;
@property (readonly, nonatomic) BOOL isStillRunningAssociatedRequest;
@property (readonly, nonatomic) NSUUID *runningAssociatedRequestID;

+ (id)errorResponseForSignature:(id)a0 error:(id)a1;
+ (id)matchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2;
+ (id)noMatchWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 signature:(id)a2;

- (void)validate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 associatedRequestID:(id)a4 result:(long long)a5 error:(id)a6;
- (id)initWithRecordingIntermission:(double)a0 retrySeconds:(double)a1 match:(id)a2 signature:(id)a3 runningAssociatedRequestID:(id)a4 error:(id)a5;

@end
