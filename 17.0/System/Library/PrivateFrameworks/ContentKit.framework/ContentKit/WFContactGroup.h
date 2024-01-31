@class NSString, NSArray;

@interface WFContactGroup : NSObject <WFNaming>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allContactGroups;
+ (id)contactGroupWithName:(id)a0;
+ (Class)preferredConcreteSubclass;

- (BOOL)containsContact:(id)a0;

@end
