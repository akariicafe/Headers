@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (void)dealloc;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end
