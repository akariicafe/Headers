@class NSString, NSArray, NSDate;
@protocol TRIFactorPackSetId;

@interface TRIRolloutHistoryRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *eventLogTime;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSArray *namespaces;

+ (id)recordWithEventLogTime:(id)a0 eventType:(unsigned char)a1 rolloutId:(id)a2 rampId:(id)a3 factorPackSetId:(id)a4 deploymentId:(int)a5 namespaces:(id)a6;

- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementNamespaces:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)copyWithReplacementEventType:(unsigned char)a0;
- (id)description;
- (id)copyWithReplacementRolloutId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementRampId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementEventLogTime:(id)a0;
- (id)initWithEventLogTime:(id)a0 eventType:(unsigned char)a1 rolloutId:(id)a2 rampId:(id)a3 factorPackSetId:(id)a4 deploymentId:(int)a5 namespaces:(id)a6;

@end
