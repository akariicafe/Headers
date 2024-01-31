@class NSString, NSURL;

@interface DDSServerConfiguration : NSObject <NSCopying>

@property (readonly, copy) NSString *xpcServiceName;
@property (readonly, copy) NSURL *assertionStorageDirectoryURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCServiceName:(id)a0 assertionStorageDirectoryURL:(id)a1;

@end
