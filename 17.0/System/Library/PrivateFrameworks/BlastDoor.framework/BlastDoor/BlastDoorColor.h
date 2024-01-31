@class NSString;

@interface BlastDoorColor : NSObject {
    void /* unknown type, empty encoding */ color;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double alpha;

- (id)init;

@end
