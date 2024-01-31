@class NSString, NSDate;

@interface PXSearchResultCollection : NSObject <PXNewSearchResult>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long assetCount;
@property (copy, nonatomic) NSString *collectionUUID;
@property (copy, nonatomic) NSString *thumbnailAssetUUID;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateIntervalFormatter;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 assetCount:(unsigned long long)a2 collectionUUID:(id)a3 thumbnailAssetUUID:(id)a4 startDate:(id)a5 endDate:(id)a6 subtype:(unsigned long long)a7;

@end
