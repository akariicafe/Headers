@interface PPCustomDonation : NSObject

+ (BOOL)donatePhotosTopics:(id)a0 bundleId:(id)a1 date:(id)a2 error:(id *)a3;
+ (BOOL)donateParsecNamedEntitiesAndTopics:(id)a0 rawQuery:(id)a1 reformulatedQuery:(id)a2 source:(id)a3 error:(id *)a4;
+ (BOOL)donatePhotosOneUpLocationNamedEntities:(id)a0 bundleId:(id)a1 error:(id *)a2;
+ (BOOL)donatePhotosLocationNamedEntities:(id)a0 bundleId:(id)a1 error:(id *)a2;
+ (BOOL)donateSiriQuery:(id)a0 results:(id)a1 error:(id *)a2;
+ (BOOL)donateLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3 error:(id *)a4;
+ (BOOL)donateNotification:(id)a0 error:(id *)a1;
+ (BOOL)donatePhotosNamedEntities:(id)a0 bundleId:(id)a1 date:(id)a2 error:(id *)a3;

@end
