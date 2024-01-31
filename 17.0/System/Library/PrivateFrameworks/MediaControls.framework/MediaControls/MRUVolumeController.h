@class NSNumber, NSTimer;
@protocol MRUVolumeControllerCoordinationDelegate, MRUVolumeControllerDelegate;

@interface MRUVolumeController : MPVolumeController {
    NSTimer *_optimisticTimer;
    id<MRUVolumeControllerDelegate> _delegate;
}

@property (retain, nonatomic) NSNumber *optimisticValue;
@property (weak, nonatomic) id<MRUVolumeControllerCoordinationDelegate> coordinationDelegate;
@property (weak, nonatomic) id<MRUVolumeControllerDelegate> delegate;

- (void)setVolumeValue:(float)a0;
- (id)description;
- (void).cxx_destruct;
- (void)restoreDelegate;
- (float)volumeValue;
- (void)setDelegate:(id)a0;
- (void)beginEqualization;
- (void)finishEqualization;

@end
