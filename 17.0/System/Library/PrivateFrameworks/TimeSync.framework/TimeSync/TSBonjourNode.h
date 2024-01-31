@class NSDictionary, NSString;

@interface TSBonjourNode : NSObject

@property (copy, nonatomic) NSDictionary *interfaces;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *domain;

- (id)init;
- (void).cxx_destruct;
- (void)addedOnInterface:(unsigned int)a0 named:(id)a1;
- (id)initWithServiceName:(id)a0 type:(id)a1 andDomain:(id)a2;
- (void)removedFromInterface:(unsigned int)a0 named:(id)a1;

@end
