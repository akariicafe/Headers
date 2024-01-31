@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } *sandboxreg;
}

- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { } *)a0;
- (void)dealloc;
- (struct FigOpaqueSandboxRegistration { } *)_sandboxRegistration;

@end
