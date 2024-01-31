@class NSString, NSUUID, NSData, NSOrderedSet, _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord;

@interface SiriPrivateLearningInference.PlusContactSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) double score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSData *usoPersonQuery;
@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord *inferredContactReference;
@property (nonatomic, retain) NSOrderedSet *tags;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
