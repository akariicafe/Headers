@class NSString;

@interface DAABLegacyContact : NSObject <DAContact>

@property (readonly, nonatomic) void *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (void)dealloc;
- (id)externalIdentifier;
- (int)legacyIdentifier;
- (void)setETag:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (id)eTag;
- (BOOL)isContact;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;
- (id)asContact;
- (void *)asPerson;
- (id)initWithABPerson:(void *)a0;

@end
