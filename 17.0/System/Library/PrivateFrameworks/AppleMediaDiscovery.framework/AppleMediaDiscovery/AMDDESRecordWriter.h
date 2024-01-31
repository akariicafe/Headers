@interface AMDDESRecordWriter : NSObject

+ (BOOL)evaluatePredicate:(id)a0 withDomain:(id)a1;
+ (id)writeDESRecordWithBundleIdentifier:(id)a0 withRecord:(id)a1 error:(id *)a2;
+ (id)writeDESRecords:(id)a0;
+ (id)writeDESRecords:(id)a0 forPluginName:(id)a1 withBundleIdentifier:(id)a2 domain:(id)a3 error:(id *)a4;
+ (id)writeDESRecordsForPlugin:(id)a0 withPayload:(id)a1 andDomain:(id)a2;

@end
