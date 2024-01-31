@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isProductionContentEnvironment;
@property (readonly, nonatomic) BOOL isProductionPrivateDataEnvironment;
@property (readonly, copy, nonatomic) NSString *privateDataContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly, copy, nonatomic) NSString *contentContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentDescription;

+ (id)defaultConfiguration;

- (id)init;
- (id)initWithEnvironment:(long long)a0;
- (void).cxx_destruct;
- (id)initWithProductionContentEnvironment:(BOOL)a0 productionPrivateDataEnvironment:(BOOL)a1 contentContainerIdentifier:(id)a2 privateDataContainerIdentifier:(id)a3 privateDataSecureContainerIdentifier:(id)a4 storeFrontID:(id)a5 environment:(long long)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
