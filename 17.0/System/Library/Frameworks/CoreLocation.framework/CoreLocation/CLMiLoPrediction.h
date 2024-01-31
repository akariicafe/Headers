@class CLMiLoFingerprintMetaInfo, NSArray, CLMiLoPredictionCloseDeviceList, CLMiLoServicePredictionLocationSimilarityList, NSError, NSUUID, NSDate;

@interface CLMiLoPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *placePredictions;
@property (readonly, nonatomic) CLMiLoServicePredictionLocationSimilarityList *locationSimilarityList;
@property (readonly, nonatomic) CLMiLoPredictionCloseDeviceList *closeDeviceList;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSDate *predictionTime;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSArray *placeConfidenceReasons;
@property (readonly, nonatomic) CLMiLoFingerprintMetaInfo *localizationFingerprintMetaInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlacePredictions:(id)a0 locationSimilarityList:(id)a1 closeDeviceList:(id)a2 error:(id)a3 requestIdentifier:(id)a4 predictionTime:(id)a5 confidence:(unsigned long long)a6 placeConfidenceReasons:(id)a7 localizationFingerprintMetaInfo:(id)a8;

@end
