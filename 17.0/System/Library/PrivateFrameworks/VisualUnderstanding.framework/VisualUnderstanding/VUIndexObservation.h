@class VUIndexMapping, NSUUID, NSSet, NSData;

@interface VUIndexObservation : NSManagedObject

@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic) short client;
@property (nonatomic) float confidence;
@property (nonatomic, copy) NSData *contextualEmbedding;
@property (nonatomic, copy) NSData *embedding;
@property (nonatomic) long long identifier;
@property (nonatomic) BOOL isPrimary;
@property (nonatomic) long long legacyLabel;
@property (nonatomic) int legacyPartition;
@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic) float quality;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic, retain) VUIndexMapping *mapping;
@property (nonatomic, retain) NSSet *tags;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
