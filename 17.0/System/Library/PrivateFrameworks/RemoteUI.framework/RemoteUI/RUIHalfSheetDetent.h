@interface RUIHalfSheetDetent : _UISheetDetent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)shouldUsePadHeightForTraitCollection:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
