@class NSUUID, NSString, LNSystemContext, NSNumber, LNEnvironment;

@interface LNActionExecutorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *executionUUID;
@property (copy, nonatomic) NSString *clientLabel;
@property (nonatomic) unsigned short source;
@property (nonatomic) long long kind;
@property (nonatomic) long long interactionMode;
@property (copy, nonatomic) NSNumber *viewActionIdentifier;
@property (nonatomic) BOOL donateToTranscript;
@property (nonatomic) BOOL requestUnlockIfNeeded;
@property (copy, nonatomic) LNEnvironment *environment;
@property (copy, nonatomic) LNSystemContext *systemContext;
@property (nonatomic) BOOL allowsPrepareBeforePerform;
@property (nonatomic) double connectionOperationTimeout;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
