@class NSNumber, SMCatalogWorkout;

@interface SMCatalogWorkoutDetail : NSObject {
    void /* unknown type, empty encoding */ workoutDetail;
}

@property (nonatomic, readonly) long long assetLoadStatus;
@property (nonatomic, readonly) SMCatalogWorkout *workout;
@property (nonatomic, readonly) long long completedCount;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;

+ (id)canonical;

- (id)init;
- (void).cxx_destruct;

@end
