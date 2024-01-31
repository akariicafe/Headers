@class NSTimer, GEOArrivalRegion;
@protocol MNArrivalRegionTimerDelegate;

@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
}

@property (weak, nonatomic) id<MNArrivalRegionTimerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithArrivalRegion:(id)a0;
- (void)updateForLocation:(id)a0;

@end
