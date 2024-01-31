@class NSArray, NSString;

@interface UIInterfaceActionSection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSString *sectionID;

+ (id)actionsFromSections:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyOfActions;
- (id)initWithActions:(id)a0;

@end
