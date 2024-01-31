@class NSArray, NSSet;

@interface PGShareBackSuggesterResult : NSObject

@property (readonly, nonatomic) NSArray *suggesterInputs;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) unsigned short processingValue;

+ (id)momentNodesForSuggesterResults:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInputs:(id)a0 processingValue:(unsigned short)a1 momentNodes:(id)a2;

@end
