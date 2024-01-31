@class NSString, NSData, ManagedCatalogPreview;

@interface ManagedCatalogModalityMetadata : NSManagedObject

@property (nonatomic, copy) NSString *abridgedSummary;
@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, retain) ManagedCatalogPreview *preview;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
