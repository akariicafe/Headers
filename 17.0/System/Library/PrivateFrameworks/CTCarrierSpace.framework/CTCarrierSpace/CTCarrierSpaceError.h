@interface CTCarrierSpaceError : NSObject

+ (id)errorForCode:(long long)a0;
+ (id)errorForCode:(long long)a0 withDescription:(id)a1;
+ (id)errorForCode:(long long)a0 subdomain:(long long)a1 subdomainError:(long long)a2;

@end
