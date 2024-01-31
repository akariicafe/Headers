@class NSString;

@interface DockKitCore.Trajectory : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ actuators;
    void /* unknown type, empty encoding */ points;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ relative;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
