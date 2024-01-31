@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (readonly, nonatomic) EKSource *source;
@property (copy, nonatomic) NSSet *notifications;

+ (BOOL)isWeakRelationship;
+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;

- (BOOL)save:(id *)a0;
- (void)setFlags:(unsigned int)a0;
- (unsigned int)flags;
- (BOOL)validate:(id *)a0;
- (void)setSource:(id)a0;
- (void)addNotification:(id)a0;
- (void)setExternalID:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)setExternalIDTag:(id)a0;
- (BOOL)_hasNotificationsCollectionFlag;
- (void)_setNotificationsCollectionFlag;
- (void)removeNotification:(id)a0;

@end
