@class UIColor;

@interface UICellAccessoryMultiselect : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (id)_identifier;

@end
