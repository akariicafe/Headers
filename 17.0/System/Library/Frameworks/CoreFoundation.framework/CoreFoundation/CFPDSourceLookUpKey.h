@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } *uncanonicalizedPath;
    struct __CFString { } *cloudPath;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
