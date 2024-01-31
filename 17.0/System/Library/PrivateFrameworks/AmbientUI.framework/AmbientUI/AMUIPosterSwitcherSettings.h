@interface AMUIPosterSwitcherSettings : PTSettings

@property (nonatomic) BOOL exitingCardBehaviorScaleDownOnly;
@property (nonatomic) double verticalExitingCardTargetScale;
@property (nonatomic) double horizontalExitingCardTargetScale;
@property (nonatomic) double exitingCardTargetOpacity;
@property (nonatomic) BOOL verticalSwitcherCircular;
@property (nonatomic) BOOL horizontalSwitcherCircular;
@property (nonatomic) double verticalScootch;
@property (nonatomic) double forwardTimeFadeoutTargetProgress;
@property (nonatomic) double reverseTimeFadeoutTargetProgress;
@property (nonatomic) double chromeFadeoutTargetProgress;
@property (nonatomic) double labelFadeinTargetProgress;
@property (nonatomic) BOOL useFallbackTitleAndSymbol;
@property (nonatomic) BOOL photoSymbolHugsEdge;
@property (nonatomic) double horizontalScaleDampingRatio;
@property (nonatomic) double horizontalScaleResponse;
@property (nonatomic) double verticalScaleDampingRatio;
@property (nonatomic) double verticalScaleResponse;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
