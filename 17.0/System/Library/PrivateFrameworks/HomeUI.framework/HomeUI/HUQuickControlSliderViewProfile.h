@class NSString, HFNumberValueConstraints;

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (nonatomic) BOOL hasOffState;
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) BOOL hasSecondaryValue;
@property (nonatomic) BOOL showGrabbers;
@property (nonatomic) unsigned long long preferredFillSection;
@property (nonatomic) unsigned long long interactionFidelity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)gestureDragCoefficient;
- (BOOL)supportsTouchContinuation;

@end
