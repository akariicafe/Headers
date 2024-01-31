@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, nonatomic) double previewDuration;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) long long size;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;

@end
