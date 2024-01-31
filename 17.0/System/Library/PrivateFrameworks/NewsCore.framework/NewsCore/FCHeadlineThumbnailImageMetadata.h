@class NSURL, FCHeadlineThumbnail;

@interface FCHeadlineThumbnailImageMetadata : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long sizeBuffer;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnail;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 size:(unsigned long long)a1 assetHandle:(id)a2;

@end
