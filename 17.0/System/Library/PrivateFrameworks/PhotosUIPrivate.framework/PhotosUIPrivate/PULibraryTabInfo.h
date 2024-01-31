@class NSString;

@interface PULibraryTabInfo : NSObject

@property (readonly, nonatomic) NSString *labelKey;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) int contentMode;

+ (id)tabInfoWithLabelKey:(id)a0 iconName:(id)a1 contentMode:(int)a2;

- (id)initWithLabelKey:(id)a0 iconName:(id)a1 contentMode:(int)a2;
- (void).cxx_destruct;

@end
