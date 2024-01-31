@class NSString, NSArray;

@interface SUNavigationMenu : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *cancelTitle;
@property (readonly, nonatomic) NSString *closedTitle;
@property (readonly, nonatomic) long long initialSelectedIndex;
@property (nonatomic) long long location;
@property (readonly, nonatomic) NSArray *menuItems;
@property (readonly, nonatomic) NSArray *navigationButtons;
@property (readonly, nonatomic) NSString *openTitle;

- (id)init;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_newNavigationButtonsFromArray:(id)a0;
- (void)_loadFromDictionary:(id)a0;
- (long long)_locationForString:(id)a0;
- (id)_newMenuItemsFromArray:(id)a0;
- (id)navigationButtonForLocation:(id)a0;

@end
