@class NSDate;

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter

@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=setVisible:) BOOL isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) BOOL hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) BOOL isScrolling;
@property (nonatomic, setter=setDecelerating:) BOOL isDecelerating;

- (void).cxx_destruct;
- (void)updateOutput;

@end
