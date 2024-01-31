@class UIMenu;

@interface UICellAccessoryPopUpMenu : UICellAccessory

@property (readonly, nonatomic) UIMenu *_internalMenu;
@property (readonly, copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) id /* block */ selectedElementDidChangeHandler;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMenu:(id)a0;

@end
