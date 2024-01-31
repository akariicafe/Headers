@class PlusStorefrontCoreDataRecord, NSString, PlusMediaSuggestionCoreDataRecord, PlusMediaReferenceSourceAppCoreDataRecord;

@interface PlusMediaReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *mediaId;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *mediaSuggestion;
@property (nonatomic, retain) PlusMediaReferenceSourceAppCoreDataRecord *sourceApp;
@property (nonatomic, retain) PlusStorefrontCoreDataRecord *storefront;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
