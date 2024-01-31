@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedEntityIDs;
@property (copy, nonatomic) NSSet *removedEntityIDs;

- (id)initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 entityID:(id)a1;
- (id)initWithAddedEntityIDs:(id)a0 removedEntityIDs:(id)a1;

@end
