@class DNDSMutableModeAssertionStore;

@interface _DNDSSyncMessageGroup : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, copy, nonatomic) DNDSMutableModeAssertionStore *store;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceType:(unsigned long long)a0 protocolVersion:(unsigned long long)a1 store:(id)a2;

@end
