@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)filename;
- (id)parentIdentifier;
- (BOOL)isFolder;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)size;
- (id)identifier;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)isExternalURL;
- (BOOL)requiresCrossDeviceCopy;

@end
