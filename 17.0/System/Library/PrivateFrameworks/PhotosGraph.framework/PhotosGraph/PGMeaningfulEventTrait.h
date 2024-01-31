@interface PGMeaningfulEventTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;

- (id)init;
- (id)debugDescription;
- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (BOOL)isMatchingRequired;

@end
