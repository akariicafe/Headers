@class NSArray, NSString;

@interface AXSSKeyboardCommandCategory : NSObject

@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)allCategoriesForAvailableCommands:(id)a0;
+ (id)_advancedCommandsFromAvailableCommands:(id)a0;
+ (id)_basicCommandsFromAvailableCommands:(id)a0;
+ (id)_categoryWithCommandIdentifiers:(id)a0 availableCommands:(id)a1 localizedName:(id)a2;
+ (id)_categoryWithCommands:(id)a0 availableCommands:(id)a1 localizedName:(id)a2;
+ (id)_deviceCommandsFromAvailableCommands:(id)a0;
+ (id)_gesturesCommandsFromAvailableCommands:(id)a0;
+ (id)_interactionCommandsFromAvailableCommands:(id)a0;
+ (id)_movementCommandsFromAvailableCommands:(id)a0;
+ (id)_pointerCommandsFromAvailableCommands:(id)a0;

- (void).cxx_destruct;
- (id)initWithCommands:(id)a0 localizedName:(id)a1;

@end
