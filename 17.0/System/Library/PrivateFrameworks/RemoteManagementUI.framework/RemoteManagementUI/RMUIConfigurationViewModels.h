@class NSArray, RMUIPasscodeViewModel;

@interface RMUIConfigurationViewModels : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (readonly, nonatomic) NSArray *profileViewModels;
@property (readonly, nonatomic) NSArray *pluginSectionViewModels;
@property (readonly, nonatomic) NSArray *pluginViewModels;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPasscodeViewModel:(id)a0 profileViewModels:(id)a1 pluginSectionViewModels:(id)a2 pluginViewModels:(id)a3;

@end
