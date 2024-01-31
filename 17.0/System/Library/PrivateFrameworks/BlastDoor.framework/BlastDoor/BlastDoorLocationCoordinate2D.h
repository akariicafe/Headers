@class NSString;

@interface BlastDoorLocationCoordinate2D : NSObject {
    void /* unknown type, empty encoding */ locationCoordinate2D;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (id)init;

@end
