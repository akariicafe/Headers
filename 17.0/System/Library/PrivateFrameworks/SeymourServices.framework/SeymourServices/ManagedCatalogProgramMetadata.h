@class NSString, NSSet, NSData, ManagedCatalogPreview;

@interface ManagedCatalogProgramMetadata : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *previewStreamingURL;
@property (nonatomic, copy) NSString *sharingURL;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSSet *accessibilityFeatures;
@property (nonatomic, retain) NSSet *contributors;
@property (nonatomic, retain) ManagedCatalogPreview *preview;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
