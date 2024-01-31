@interface CKRecordUtilities : NSObject

+ (id)recordIDUsingName:(id)a0 zoneID:(id)a1;
+ (id)recordIDUsingSalt:(id)a0 zoneID:(id)a1 guid:(id)a2;
+ (id)recordNameForRecordChangeTag:(id)a0 ckRecordID:(id)a1 salt:(id)a2 guid:(id)a3;
+ (id)recordNameUsingSalt:(id)a0 guid:(id)a1;

@end
