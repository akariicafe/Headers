@class UIView;

@interface UICellAccessoryCustomView : UICellAccessory

@property (readonly, nonatomic) UIView *customView;
@property (readonly, nonatomic) long long placement;
@property (nonatomic) BOOL maintainsFixedSize;
@property (copy, nonatomic) id /* block */ position;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_defaultPlacementForHeader:(BOOL)a0;
- (BOOL)_isSystemType;
- (id)initWithCustomView:(id)a0 placement:(long long)a1;

@end
