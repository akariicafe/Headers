@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (unsigned long long)hash;
- (id)createRBSTarget;
- (id)process;
- (id)environment;
- (id)description;
- (id)identity;
- (BOOL)isSystem;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
