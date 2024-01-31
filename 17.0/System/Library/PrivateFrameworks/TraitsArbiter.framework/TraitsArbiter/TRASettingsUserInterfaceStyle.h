@class TRAArbitrationUserInterfaceStyleInputs;

@interface TRASettingsUserInterfaceStyle : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) TRAArbitrationUserInterfaceStyleInputs *userInterfaceStyleInputs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserInterfaceStyleInputs:(id)a0;
- (id)initWithUserInterfaceStyleSettings:(id)a0;
- (BOOL)isEqualToUserInterfaceStyleSettings:(id)a0;

@end
