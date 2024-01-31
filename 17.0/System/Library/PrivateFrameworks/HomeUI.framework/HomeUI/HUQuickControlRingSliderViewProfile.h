@class NSArray, HFNumberValueConstraints, NSString;

@interface HUQuickControlRingSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (nonatomic) BOOL isHandleViewVisible;
@property (nonatomic) unsigned long long handleViewStyle;
@property (nonatomic) BOOL hasOffState;
@property (retain, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (nonatomic) BOOL hasSecondaryValue;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL shouldShowSupplementaryValue;
@property (retain, nonatomic) NSArray *gradationMarkingValues;
@property (nonatomic) unsigned long long gradationMarkingViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
