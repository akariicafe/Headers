@class NSArray, NSDictionary, NSString, OSDFeatures, CSServerEndpointFeatures;

@interface CSEndpointerMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double totalAudioRecorded;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint;
@property (retain, nonatomic) CSServerEndpointFeatures *serverFeaturesAtEndpoint;
@property (nonatomic) BOOL isRequestTimeOut;
@property (nonatomic) BOOL isAnchorTimeBuffered;
@property (retain, nonatomic) NSString *assetConfigVersion;
@property (nonatomic) unsigned long long assetProviderType;
@property (nonatomic) double blkHepAudioOrigin;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) unsigned long long firstAudioSampleSensorTimestamp;
@property (nonatomic) unsigned long long endpointHostTime;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTotalAudioRecorded:(double)a0 endpointBufferHostTime:(unsigned long long)a1 featuresAtEndpoint:(id)a2 endpointerType:(long long)a3 serverFeatureLatencyDistribution:(id)a4 additionalMetrics:(id)a5 trailingSilenceDurationAtEndpoint:(double)a6 requestId:(id)a7;
- (id)initWithTotalAudioRecorded:(double)a0 endpointBufferHostTime:(unsigned long long)a1 featuresAtEndpoint:(id)a2 endpointerType:(long long)a3 serverFeatureLatencyDistribution:(id)a4 additionalMetrics:(id)a5 trailingSilenceDurationAtEndpoint:(double)a6 requestId:(id)a7 osdFeatures:(id)a8 serverFeatures:(id)a9 isRequestTimeOut:(BOOL)a10 assetConfigVersion:(id)a11 assetProviderType:(unsigned long long)a12 blkHepAudioOrigin:(double)a13 vtExtraAudioAtStartInMs:(double)a14 firstAudioSampleSensorTimestamp:(unsigned long long)a15 isAnchorTimeBuffered:(BOOL)a16 endpointHostTime:(unsigned long long)a17;
- (BOOL)isEnhancedEndpointer;
- (id)metricsCopyWithRequestId:(id)a0 lastAudioChunkHostTime:(unsigned long long)a1;

@end
