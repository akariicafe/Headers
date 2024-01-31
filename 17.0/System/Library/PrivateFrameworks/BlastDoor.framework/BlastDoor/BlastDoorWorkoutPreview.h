@class NSString;

@interface BlastDoorWorkoutPreview : NSObject {
    void /* unknown type, empty encoding */ workoutPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) BOOL isIndoor;
@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) unsigned long long goalTypeIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
