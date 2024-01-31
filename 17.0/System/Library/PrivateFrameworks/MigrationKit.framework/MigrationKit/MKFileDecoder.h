@class NSString;

@interface MKFileDecoder : NSObject <MKAssetDecoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extractFormatOfAsset:(id)a0;

@end
