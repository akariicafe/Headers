@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (nonatomic) BOOL hasMaxSupportedSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSupportedSize;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
