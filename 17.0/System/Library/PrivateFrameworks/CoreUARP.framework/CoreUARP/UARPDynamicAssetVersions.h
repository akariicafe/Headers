@class NSArray, NSURL, UARPSuperBinaryAsset, NSMutableArray;

@interface UARPDynamicAssetVersions : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_serialNumbers;
}

@property (readonly) NSArray *partnerSerialNumbers;

+ (id)tag;

- (id)initWithURL:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)decomposeUARP;

@end
