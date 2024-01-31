@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <NSCopying, NSObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) unsigned long long playCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_testableMetadataItem_1;
+ (id)keyValueStoreItemIdentifierForItem:(id)a0;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)a0 itemTitle:(id)a1 albumName:(id)a2 itemArtistName:(id)a3 feedURL:(id)a4 feedGUID:(id)a5;
+ (id)metadataWithItemIdentifier:(id)a0 bookmarkTime:(double)a1 bookmarkTimestamp:(double)a2 hasBeenPlayed:(BOOL)a3 playCount:(unsigned long long)a4;
+ (id)metadataWithItemIdentifier:(id)a0 keyValueStorePayload:(id)a1;
+ (id)metadataWithItemIdentifier:(id)a0 keyValueStorePayload:(id)a1 failuresOkay:(BOOL)a2;
+ (id)metadataWithValuesFromDataSourceItem:(id)a0;
+ (id)pairWithKVSKey:(id)a0 kvsPayload:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initAsTestableItem;
- (id)keyValueStorePayload;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;

@end
