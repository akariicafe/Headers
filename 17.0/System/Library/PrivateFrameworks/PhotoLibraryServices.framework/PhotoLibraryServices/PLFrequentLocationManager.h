@class NSSet;
@protocol PLMomentGenerationDataManagement;

@interface PLFrequentLocationManager : NSObject {
    BOOL _invalidateCurrentFrequentLocations;
}

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;
@property (retain, nonatomic) NSSet *currentFrequentLocations;

- (void).cxx_destruct;
- (id)_createFrequentLocationsWithAllMoments:(id)a0;
- (BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)a0;
- (id)initWithMomentGenerationDataManager:(id)a0;
- (void)invalidateCurrentFrequentLocations;

@end
