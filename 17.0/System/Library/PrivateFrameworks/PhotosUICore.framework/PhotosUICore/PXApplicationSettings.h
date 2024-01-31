@class NSString;

@interface PXApplicationSettings : PXSettings

@property (nonatomic) double defaultNavigationTimeoutDuration;
@property (nonatomic) BOOL wantsPseudostringsWithSpecialCharacters;
@property (copy, nonatomic) NSString *stringWithSpecialCharacters;
@property (nonatomic) BOOL wantsPseudostringsWithIncreasedLength;
@property (nonatomic) long long pseudoStringsLengthIncreaseFactor;
@property (nonatomic) BOOL shouldClearUndoStackAutomatically;
@property (nonatomic) double backgroundThresholdDurationForUndoActionsInvalidation;

+ (id)sharedInstance;
+ (id)stringTransformedForDisplay:(id)a0;
+ (id)attributedStringTransformedForDisplay:(id)a0;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;
- (BOOL)_wantsPseudoStringsForDisplay;

@end
