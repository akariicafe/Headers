@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *highlightUUIDs;

- (unsigned long long)changeCount;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithHighlightUUIDs:(id)a0;

@end
