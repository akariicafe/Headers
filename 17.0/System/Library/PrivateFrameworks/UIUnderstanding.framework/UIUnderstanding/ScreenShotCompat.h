@class NSString;

@interface ScreenShotCompat : NSObject {
    void /* unknown type, empty encoding */ imageID;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ detections;
    void /* unknown type, empty encoding */ groupingInfo;
}

@property (nonatomic, readonly) NSString *imageID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 image:(struct CGImage { } *)a1 detections:(id)a2 groupingInfo:(id)a3;

@end
