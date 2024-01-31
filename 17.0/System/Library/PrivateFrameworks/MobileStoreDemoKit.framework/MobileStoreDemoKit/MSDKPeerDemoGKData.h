@interface MSDKPeerDemoGKData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL dataValid;
@property (nonatomic) float reliefBoxSpaceMM;
@property (nonatomic) float reliefTotalBoxSpaceMM;
@property (nonatomic) float offsetFromToleranceX;
@property (nonatomic) float offsetFromToleranceY;
@property (nonatomic) float offsetFromToleranceZ;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)addOffsetFromTolerance:(SEL)a0;
- (void)addReliefBoxSpaceMM:(float)a0;
- (void)addReliefTotalBoxSpaceMM:(float)a0;
- (void)markAsValid;

@end
