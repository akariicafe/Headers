@class NSString, NSSet;

@interface ManagedCatalogPreview : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, retain) NSSet *catalogModalityMetadata;
@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, retain) NSSet *trainerMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
