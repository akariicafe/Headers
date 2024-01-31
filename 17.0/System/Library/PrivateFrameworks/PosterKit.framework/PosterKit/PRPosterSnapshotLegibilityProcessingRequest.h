@class PRPosterLegibilitySettings;

@interface PRPosterSnapshotLegibilityProcessingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL determineColorStatistics;
@property (readonly, nonatomic) PRPosterLegibilitySettings *desiredLegibilitySettings;

+ (id)defaultLegibilityProcessingRequest;
+ (id)defaultLegibilityProcessingRequestWithDesiredLegibilitySettings:(id)a0 determineColorStatistics:(BOOL)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDesiredLegibilitySettings:(id)a0 determineColorStatistics:(BOOL)a1;
- (BOOL)isEqualToSnapshotLegibilityProcessingRequest:(id)a0;

@end
