@interface _ICPortraitUtilities : NSObject

+ (id)acceptedAlgorithms;
+ (id)acceptedSourceBundleIds;
+ (unsigned char)contactChangeTypeForPortraitChangeType:(unsigned char)a0;
+ (id)contactFromPortraitContact:(id)a0;
+ (id)contactRecordFromPortraitContactRecord:(id)a0;
+ (unsigned char)contactSourceTypeForPortraitSourceType:(unsigned char)a0;
+ (id)excludedAlgorithms;
+ (id)filteredNamedEntitiesFromJSONDonations:(id)a0;
+ (id)namedEntityRecordFromPortraitNamedEntityRecord:(id)a0;

@end
