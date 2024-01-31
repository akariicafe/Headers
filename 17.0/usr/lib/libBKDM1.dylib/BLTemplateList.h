@class NSLock, NSMutableDictionary;

@interface BLTemplateList : NSObject {
    NSMutableDictionary *_identityList;
    NSMutableDictionary *_templateList;
    NSLock *_listLock;
}

- (void)removeAll;
- (id)initWithIdentities:(id)a0;
- (id)allIdentities;
- (void)setIdentity:(id)a0;
- (void).cxx_destruct;
- (void)removeIdentity:(id)a0;
- (void)setIdentities:(id)a0;
- (id)identityByUUID:(id)a0;
- (unsigned long long)countForUser:(unsigned int)a0;
- (id)identitiesForUser:(unsigned int)a0;
- (void)setIdentitiesForUser:(unsigned int)a0 withTemplateListName:(id)a1;
- (void)setIdentity:(id)a0 withTemplateName:(id)a1;
- (id)templateNameForIdentity:(id)a0;

@end
