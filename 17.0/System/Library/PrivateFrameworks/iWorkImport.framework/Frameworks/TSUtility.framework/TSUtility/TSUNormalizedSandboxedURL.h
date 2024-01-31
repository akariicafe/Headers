@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSandboxAccess;
- (id)initWithURL:(id)a0 originalSandboxedURL:(id)a1;
- (id)originalSandboxedURLForNormalizing;

@end
