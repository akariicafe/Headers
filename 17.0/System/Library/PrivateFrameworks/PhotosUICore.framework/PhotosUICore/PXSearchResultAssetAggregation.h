@class NSString, NSArray;

@interface PXSearchResultAssetAggregation : NSObject <PXNewSearchResult>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long assetCount;
@property (copy, nonatomic) NSString *thumbnailAssetUUID;
@property (readonly, copy, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 assetUUIDs:(id)a2 subtype:(unsigned long long)a3 identifier:(id)a4;

@end
