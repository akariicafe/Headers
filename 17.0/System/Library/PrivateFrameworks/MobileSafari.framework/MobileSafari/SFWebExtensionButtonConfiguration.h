@class NSArray, SFWebExtensionsController;

@interface SFWebExtensionButtonConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long activeExtensionCount;
@property (readonly, nonatomic) BOOL alwaysShowMultipleExtensionsButton;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) SFWebExtensionsController *webExtensionsController;

- (void).cxx_destruct;
- (id)initWithActiveExtensionCount:(unsigned long long)a0 alwaysShowMultipleExtensionsButton:(BOOL)a1 buttons:(id)a2 extensionsController:(id)a3;
- (BOOL)isEqual:(id)a0;

@end
