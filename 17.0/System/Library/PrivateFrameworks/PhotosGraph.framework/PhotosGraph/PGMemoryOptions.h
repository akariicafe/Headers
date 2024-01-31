@class NSArray, NSSet, NSDictionary, CLLocation, NSDate;

@interface PGMemoryOptions : NSObject

@property unsigned long long reason;
@property (retain, nonatomic) NSDate *universalDate;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *peopleNames;
@property (retain, nonatomic) NSArray *existingMemories;
@property (retain, nonatomic) NSArray *blockedMemories;
@property (retain, nonatomic) NSSet *blockedFeatures;
@property (retain, nonatomic) NSArray *existingSuggestions;
@property (retain, nonatomic) NSDate *lastMemoryCreationUniversalDate;
@property (retain, nonatomic) NSDate *baseMemoryCreationUniversalDate;
@property (retain, nonatomic) NSDictionary *extraParameters;
@property (nonatomic) unsigned long long randomSeed;
@property (nonatomic) double forcedBeta;

+ (id)stringForReason:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(unsigned long long)a0 universalDate:(id)a1 location:(id)a2 peopleNames:(id)a3;

@end
