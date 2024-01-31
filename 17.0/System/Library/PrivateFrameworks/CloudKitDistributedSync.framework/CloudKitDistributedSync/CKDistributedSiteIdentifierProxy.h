@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)identifier;
- (id)modifier;
- (id)siteIdentifier;
- (void)copyIdentifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (void)copyModifierBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;
- (unsigned long long)identifierSize;
- (unsigned long long)modifierSize;

@end
