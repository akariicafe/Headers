@interface UICellAccessoryDetail : UICellAccessory

@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
