@class NSDate;

@interface VUIndexSubset : NSManagedObject

@property (nonatomic) long long contextualEmbeddingRevision;
@property (nonatomic) long long embeddingRevision;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic) BOOL staleObservations;
@property (nonatomic) BOOL staleTags;
@property (nonatomic) short type;
@property (nonatomic) int version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
