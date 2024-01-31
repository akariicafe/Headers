@class NSUUID;

@interface RoomPlan.ObjectKitKeyframe : NSObject <OUKeyframe> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ coreKeyframe;
}

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ cameraPose;
@property (nonatomic) void /* unknown type, empty encoding */ count;
@property (nonatomic) void /* unknown type, empty encoding */ points;
@property (nonatomic) void /* unknown type, empty encoding */ pointsToWorld;
@property (nonatomic) void /* unknown type, empty encoding */ semanticLabels;
@property (nonatomic) void /* unknown type, empty encoding */ semanticVotes;
@property (nonatomic) void /* unknown type, empty encoding */ colors;
@property (nonatomic) void /* unknown type, empty encoding */ timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
