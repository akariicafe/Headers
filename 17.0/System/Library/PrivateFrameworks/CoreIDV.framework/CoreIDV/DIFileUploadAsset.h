@class NSURL, NSFileHandle;

@interface DIFileUploadAsset : DIUploadAsset <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSFileHandle *fileHandle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 assetType:(long long)a1;

@end
