@class NSString, NSUUID, NSData, PlusMediaSuggestionCoreDataRecord;

@interface ThinMediaGroundTruthCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *groundTruthSource;
@property (nonatomic, copy) NSString *groundTruthType;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *plusMediaSuggestion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
