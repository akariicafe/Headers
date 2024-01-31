@class NSString, NSUUID, NSArray;

@interface FIIntervalWorkoutDefinition : NSObject <FIDictionaryRepresentable>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *sets;
@property (readonly, nonatomic) unsigned long long intervalCount;

+ (id)definitionFromDictionary:(id)a0 error:(id *)a1;
+ (id)intervalWorkoutDefinition;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)intervalCount;
- (id)byChangingName:(id)a0;
- (id)byRemovingSetDefinitionAtIndex:(unsigned long long)a0;
- (id)byAddingIntervalDefinition:(id)a0 toSetIndex:(unsigned long long)a1;
- (id)byAddingSetDefinition:(id)a0;
- (id)byInsertingIntervalDefinition:(id)a0 atIndexPath:(id)a1;
- (id)byInsertingSetDefinition:(id)a0 atIndex:(unsigned long long)a1;
- (id)byRemovingIntervalDefinitionAtIndexPath:(id)a0;
- (id)byReplacingIntervalDefinitionAtIndexPath:(id)a0 withIntervalDefinition:(id)a1;
- (id)byReplacingSetDefinitionAtIndex:(unsigned long long)a0 withSetDefinition:(id)a1;
- (id)initWithName:(id)a0 identifier:(id)a1 sets:(id)a2;
- (id)intervalDefinitionForIntervalAtIndex:(long long)a0;

@end
