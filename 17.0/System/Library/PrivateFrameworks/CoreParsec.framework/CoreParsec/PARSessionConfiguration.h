@class NSString, NSDictionary;
@protocol PARResultFactory;

@interface PARSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *userAgent;
@property (readonly) id<PARResultFactory> factory;
@property BOOL dontPreloadImages;
@property BOOL enablePersonalizedRanking;
@property BOOL parsecEnabled;
@property (copy, nonatomic) NSString *experimentNamespaceId;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *experimentTreatmentId;
@property (nonatomic) int experimentDeploymentId;
@property (nonatomic) int experimentVersion;
@property (copy, nonatomic) NSDictionary *overrideFeatureFlags;

+ (id)defaultSessionConfiguration;

- (id)init;
- (id)initWithId:(id)a0 userAgent:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 userAgent:(id)a1 factory:(id)a2;
- (id)initWithCoder:(id)a0;

@end
