@class NSURL;

@interface DCSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldIssueSandboxExtensionWhenEncoding;
@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL canAccessFileURL;
@property (readonly, nonatomic) NSURL *fileURL;

- (void)dealloc;
- (id)initWithFileURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)relinquish;
- (id)initWithCoder:(id)a0;

@end
