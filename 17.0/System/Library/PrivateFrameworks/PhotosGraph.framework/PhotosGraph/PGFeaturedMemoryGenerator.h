@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *upperBoundLocalDate;
@property (nonatomic) BOOL usesLowRequirements;
@property (nonatomic) BOOL oldMemory;

- (void).cxx_destruct;

@end
