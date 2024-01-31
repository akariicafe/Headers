@class SMArtwork;

@interface SMMediaMoment : NSObject {
    void /* unknown type, empty encoding */ mediaMoment;
}

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) SMArtwork *artwork;

- (id)init;
- (void).cxx_destruct;

@end
