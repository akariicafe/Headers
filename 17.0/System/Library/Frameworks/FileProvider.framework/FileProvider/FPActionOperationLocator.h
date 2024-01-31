@class NSString, FPItem, NSURL, NSObject;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding> {
    NSObject *_object;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isExternalURL;
@property (readonly, nonatomic) BOOL isProviderItem;
@property (readonly, nonatomic) FPItem *asFPItem;
@property (readonly, nonatomic) NSURL *asURL;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) id parentIdentifier;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL requiresCrossDeviceCopy;

+ (id)locatorForURL:(id)a0;
+ (id)locatorForItem:(id)a0;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDownloaded;
- (void)_setObject:(id)a0;
- (void)attachSandboxExtensionOnXPCEncoding;

@end
