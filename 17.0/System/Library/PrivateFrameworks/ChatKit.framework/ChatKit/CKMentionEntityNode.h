@class NSString, NSMutableSet, NSMutableDictionary;

@interface CKMentionEntityNode : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableSet *entities;
@property (retain, nonatomic) NSMutableSet *possibleEntities;
@property (retain, nonatomic) NSMutableDictionary *children;

- (void)addEntity:(id)a0;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)addPossibleEntity:(id)a0;
- (id)childWithKey:(id)a0;

@end
