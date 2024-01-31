@class NSString;

@interface DockKitCore.Orientation : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ allocatedLock;
    void /* unknown type, empty encoding */ _yaw;
    void /* unknown type, empty encoding */ _pitch;
    void /* unknown type, empty encoding */ _roll;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
