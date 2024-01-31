@class NSString;

@interface SASBoardServicesConfiguration : NSObject

@property (retain, nonatomic) NSString *machServiceIdentifier;
@property (retain, nonatomic) NSString *presentationDomain;
@property (retain, nonatomic) NSString *presentationIdentifier;
@property (retain, nonatomic) NSString *signalDomain;
@property (retain, nonatomic) NSString *signalIdentifier;

+ (id)new;
+ (id)configuration;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)domainForService:(long long)a0;
- (id)identifierForService:(long long)a0;

@end
