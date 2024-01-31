@class NSArray;

@interface PGGraphMemoriesEnrichmentProcessorMemoryNodesToSort : NSObject

@property (retain, nonatomic) NSArray *memoryNodesWithoutEphemeralMemory;
@property (retain, nonatomic) NSArray *memoryNodesWithoutEphemeralMemoryLastEnrichmentDate;
@property (retain, nonatomic) NSArray *memoryNodesWithEphemeralMemoryLastEnrichmentDate;

- (id)init;
- (void).cxx_destruct;

@end
