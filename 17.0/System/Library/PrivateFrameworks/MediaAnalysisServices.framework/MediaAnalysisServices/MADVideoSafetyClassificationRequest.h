@class NSNumber, MADVideoSafetyFrameSampling;

@interface MADVideoSafetyClassificationRequest : MADVideoRequest

@property (nonatomic) BOOL requiresScoresAndLabels;
@property (copy, nonatomic) MADVideoSafetyFrameSampling *sampling;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (nonatomic) BOOL requiresBlastdoor;
@property (retain, nonatomic) NSNumber *sensitiveFrameCountThreshold;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
