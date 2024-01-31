@class NSDictionary, AVMetadataItemFilterInternal;

@interface AVMetadataItemFilter : NSObject {
    AVMetadataItemFilterInternal *_itemFilterInternal;
}

@property (readonly) NSDictionary *whitelist;

+ (id)metadataItemFilterForSharing;

@end
