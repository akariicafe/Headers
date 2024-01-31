@class NSDictionary, NSArray;

@interface PGGraphPortraitKnowledgeToDonate : NSObject

@property (readonly, nonatomic) NSDictionary *topics;
@property (readonly, nonatomic) NSArray *namedEntities;
@property (readonly, nonatomic) NSArray *locationNamedEntities;

- (void).cxx_destruct;
- (id)initWithTopics:(id)a0 namedEntities:(id)a1 locationNamedEntities:(id)a2;

@end
