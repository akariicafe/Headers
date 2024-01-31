@class PKDateContainer, PKPassTileAccessory;

@interface PKPassTileStateCheckIn : PKPassTileState

@property (retain, nonatomic) PKDateContainer *availableFrom;
@property (retain, nonatomic) PKPassTileAccessory *secondaryAccessory;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
