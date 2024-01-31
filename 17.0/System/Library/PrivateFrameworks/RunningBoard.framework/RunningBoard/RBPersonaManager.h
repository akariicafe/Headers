@class NSString;

@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    BOOL _personasSupported;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _personalPersonaUID;
    NSString *_personalPersonaUniqueString;
}

- (id)init;
- (BOOL)isConcretePersona:(id)a0;
- (BOOL)personasAreSupported;
- (id)personalPersonaUniqueString;
- (void).cxx_destruct;
- (BOOL)personaRequiredForExtensionContext:(id)a0 serviceDict:(id)a1;
- (BOOL)personaForIdentity:(id)a0 context:(id)a1 personaUID:(out unsigned int *)a2 personaUniqueString:(out id *)a3;

@end
