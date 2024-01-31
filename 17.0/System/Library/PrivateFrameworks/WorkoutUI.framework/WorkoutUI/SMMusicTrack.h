@class NSString;

@interface SMMusicTrack : NSObject {
    void /* unknown type, empty encoding */ musicTrack;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;

- (id)init;
- (void).cxx_destruct;

@end
