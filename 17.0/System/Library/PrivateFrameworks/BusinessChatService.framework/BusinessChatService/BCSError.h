@interface BCSError : NSError

+ (id)errorWithError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorDescription:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorDescription:(id)a2 localizedDescription:(id)a3;

- (id)errorDescription;
- (id)initWithError:(id)a0;
- (id)localizedDescription;

@end
