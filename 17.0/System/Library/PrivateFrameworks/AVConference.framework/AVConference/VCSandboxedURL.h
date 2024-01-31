@class NSString;

@interface VCSandboxedURL : NSURL <NSCopying, NSSecureCoding> {
    unsigned char _accessType;
    NSString *_urlToken;
    long long _urlTokenHandle;
    BOOL _deserialized;
    BOOL _tokenConsumed;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)deserialize:(id)a0;
+ (id)stringFromAccessType:(unsigned char)a0;

- (const char *)extensionClass;
- (void)dealloc;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)consumeToken;
- (id)initWithFilePath:(id)a0 accessType:(unsigned char)a1;
- (BOOL)issueSandboxExtensionForFilePath:(id)a0;

@end
