@class NSString;

@interface SymbolCandidate : NSObject

@property (nonatomic) unsigned short symbol;
@property (nonatomic) double probability;
@property (nonatomic) double logProbability;
@property (readonly, nonatomic) NSString *description;

@end
