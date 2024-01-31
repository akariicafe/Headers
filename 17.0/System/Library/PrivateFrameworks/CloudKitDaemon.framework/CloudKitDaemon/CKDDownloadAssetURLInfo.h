@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject

@property (retain, nonatomic) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
