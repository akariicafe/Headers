@protocol VNObservationsRecipient;

@interface VNCoreSceneUnderstandingDetectorFeatureConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) id<VNObservationsRecipient> observationsRecipient;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObservationsRecipient:(id)a0;

@end
