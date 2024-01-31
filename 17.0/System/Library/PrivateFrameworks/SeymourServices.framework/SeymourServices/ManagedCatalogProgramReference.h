@class NSString, NSOrderedSet;

@interface ManagedCatalogProgramReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, retain) NSOrderedSet *modalityIdentifierss;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;
@property (nonatomic, retain) NSOrderedSet *workoutIdentifierss;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
