@class NSNumber;

@interface _UITextSelectionSettings : _UISettings

@property (nonatomic) double minPinkWidth;
@property (nonatomic) double maxPinkWidth;
@property (nonatomic) double pinkWidthFactor;
@property (nonatomic) double linear;
@property (nonatomic) double parabolic;
@property (nonatomic) double gain;
@property (nonatomic) double allowableSeparation;
@property (nonatomic) double allowableForceMovement;
@property (retain, nonatomic) NSNumber *shouldUseAcceleration;
@property (retain, nonatomic) NSNumber *shouldPreferEndOfWord;
@property (retain, nonatomic) NSNumber *allowExtendingSelections;
@property (retain, nonatomic) NSNumber *enableDeepPress;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
