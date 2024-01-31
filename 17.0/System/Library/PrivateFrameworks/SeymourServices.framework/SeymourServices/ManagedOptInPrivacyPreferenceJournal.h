@class NSString, NSDate;

@interface ManagedOptInPrivacyPreferenceJournal : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
