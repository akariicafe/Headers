@class NSURL, NSString, NTPBAsset;

@interface FCAssetContentArchive : FCContentArchive {
    NTPBAsset *_asset;
    NSURL *_remoteURL;
    NSString *_filePath;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)manifest;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;

@end
