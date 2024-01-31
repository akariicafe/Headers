@class NSArray, NSNumber;

@interface CDMUserVocabList : NSObject

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) NSNumber *hashValue;

- (void).cxx_destruct;
- (id)initWithEntries:(id)a0 hashValue:(id)a1;

@end
