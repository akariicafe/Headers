@class NSString;

@interface _OSInactivityPredictorMetadata : NSObject <NSSecureCoding, _OSInactivityPredictorMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *predictorType;
@property (copy, nonatomic) NSString *queryingMechanism;
@property (nonatomic) double recommendedWaitTime;
@property (nonatomic) double longThreshold;
@property (nonatomic) double confidenceThresholdStrict;
@property (nonatomic) double confidenceThresholdRelaxed;
@property (nonatomic) BOOL requireEnoughHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithProtocolConformer:(id)a0;

@end
