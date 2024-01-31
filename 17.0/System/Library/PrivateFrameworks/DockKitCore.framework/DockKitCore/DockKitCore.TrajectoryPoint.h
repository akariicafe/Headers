@class NSString;

@interface DockKitCore.TrajectoryPoint : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ positions;
    void /* unknown type, empty encoding */ velocities;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithTime:(double)a0 positions:(id)a1 velocities:(id)a2;

@end
