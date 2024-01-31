@class NSString;

@interface WorkoutCore.WorkoutConfiguration : NSObject <WOPersistableObject> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ activityType;
    void /* unknown type, empty encoding */ occurrence;
    void /* unknown type, empty encoding */ externalProvider;
    void /* unknown type, empty encoding */ scheduledDate;
    void /* unknown type, empty encoding */ lastCompletedDate;
    void /* unknown type, empty encoding */ usedProtobuf;
}

@property (nonatomic, readonly) NSString *analyticsKey;
@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) long long hash;

+ (id)deserializeFromPersistence:(id)a0;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
