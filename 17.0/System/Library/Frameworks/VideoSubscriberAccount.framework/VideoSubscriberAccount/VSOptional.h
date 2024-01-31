@interface VSOptional : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id object;

+ (id)optionalWithObject:(id)a0;
+ (id)decodableClasses;

- (id)initWithObject:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)unwrapWithFallback:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)forceUnwrapObject;
- (void)conditionallyUnwrapObject:(id /* block */)a0 otherwise:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)conditionallyUnwrapObject:(id /* block */)a0;
- (id)initWithCoder:(id)a0;

@end
