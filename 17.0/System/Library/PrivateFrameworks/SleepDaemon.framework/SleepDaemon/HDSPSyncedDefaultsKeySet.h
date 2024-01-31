@class NSString, NSSet, NSDictionary;

@interface HDSPSyncedDefaultsKeySet : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modificationDateKey;
@property (readonly, nonatomic) NSSet *keysToPersist;
@property (readonly, nonatomic) NSSet *keysToSync;
@property (readonly, nonatomic) NSSet *perGizmoKeys;
@property (readonly, nonatomic) NSDictionary *defaultValues;

- (id)initWithIdentifier:(id)a0 modficationDateKey:(id)a1 keysToPersist:(id)a2 keysToSync:(id)a3;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 modficationDateKey:(id)a1 keysToPersist:(id)a2 keysToSync:(id)a3 perGizmoKeys:(id)a4 defaultValues:(id)a5;

@end
