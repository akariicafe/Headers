@class NSBundle;

@interface VNFrameworkResourceDescriptor : VNResourceDescriptor

@property (readonly) NSBundle *frameworkBundle;

+ (id)descriptorForFrameworkContainingClass:(Class)a0 error:(id *)a1;
+ (id)descriptorForFrameworkContainingClassNamed:(id)a0 error:(id *)a1;
+ (id)descriptorForFrameworkIdentifier:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (id)initWithBundle:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
