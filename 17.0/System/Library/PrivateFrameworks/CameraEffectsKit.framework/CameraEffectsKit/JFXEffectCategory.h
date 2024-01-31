@class NSString, NSArray;

@interface JFXEffectCategory : NSObject

@property (retain, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *effectIDs;
@property (nonatomic) int effectType;
@property (readonly, nonatomic) BOOL isNewCategory;
@property (readonly, nonatomic) BOOL containsNewEffects;

- (void).cxx_destruct;
- (id)initWithCategoryID:(id)a0 forEffectType:(int)a1 displayName:(id)a2 effectIDs:(id)a3 isNewCategory:(BOOL)a4 containsNewEffects:(BOOL)a5;

@end
