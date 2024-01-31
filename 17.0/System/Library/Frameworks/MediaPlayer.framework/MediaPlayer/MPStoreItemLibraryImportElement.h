@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject

@property (readonly, nonatomic) long long storeItemID;
@property (readonly, nonatomic) NSDictionary *additionalTrackMetadata;

- (void).cxx_destruct;
- (id)initWithStoreItemID:(long long)a0 additionalTrackMetadata:(id)a1;
- (id)storeItem;

@end
