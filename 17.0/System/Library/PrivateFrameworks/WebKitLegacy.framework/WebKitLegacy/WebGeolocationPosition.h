@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal *_internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(void *)a0;
- (id)initWithTimestamp:(double)a0 latitude:(double)a1 longitude:(double)a2 accuracy:(double)a3;

@end
