@interface AXPageTurningReplayableGesture : AXReplayableGesture

@property (nonatomic) BOOL isLeftToRightSwipe;
@property (nonatomic) BOOL isLandscape;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)arePointsDeviceRelative;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (id)initForLeftToRightSwipe:(BOOL)a0;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (void)updateForLandscape:(BOOL)a0;

@end
