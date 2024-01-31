@class NSDictionary;

@interface VCTuningParameters : NSObject {
    NSDictionary *_plist;
}

@property (nonatomic) float oneShotFramingDuration;
@property (nonatomic) float cameraResetDuration;
@property (nonatomic) float wideToSuperWideSwitchMargin;
@property (nonatomic) float superWideToWideSwitchMargin;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
