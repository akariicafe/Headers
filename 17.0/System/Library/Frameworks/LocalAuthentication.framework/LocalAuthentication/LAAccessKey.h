@class NSString, LAACL;
@protocol LAKeyStoreKey;

@interface LAAccessKey : NSObject {
    id<LAKeyStoreKey> _key;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) LAACL *acl;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)armInContext:(id)a0 completion:(id /* block */)a1;
- (void)armInContext:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)initWithACL:(id)a0;
- (void)unlockKey:(id)a0 inContext:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;

@end
