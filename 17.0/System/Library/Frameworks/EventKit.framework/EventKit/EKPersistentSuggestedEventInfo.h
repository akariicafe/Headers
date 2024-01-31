@class NSString, NSDate, EKPersistentEvent;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) EKPersistentEvent *owner;
@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;

+ (id)relations;
+ (Class)meltedClass;
+ (id)suggestedEventInfoWithOpaqueKey:(id)a0 uniqueKey:(id)a1;

- (id)owner;
- (void)setOwner:(id)a0;
- (id)uniqueKey;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)semanticIdentifier;
- (unsigned long long)changedFields;
- (id)opaqueKey;
- (id)timestampAsDate;
- (BOOL)changesAcknowledged;
- (id)extractionGroupIdentifier;
- (void)setChangedFields:(unsigned long long)a0;
- (void)setChangesAcknowledged:(BOOL)a0;
- (void)setExtractionGroupIdentifier:(id)a0;
- (void)setOpaqueKey:(id)a0;
- (void)setTimestampAsDate:(id)a0;
- (void)setUniqueKey:(id)a0;

@end
