@class NSData, NSString;

@interface MCMClientIdentityIndex : NSObject <NSCopying> {
    NSData *_auditToken;
    NSString *_personaUniqueString;
}

- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 personaUniqueString:(id)a1;
- (BOOL)isEqualToClientIdentityIndex:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
