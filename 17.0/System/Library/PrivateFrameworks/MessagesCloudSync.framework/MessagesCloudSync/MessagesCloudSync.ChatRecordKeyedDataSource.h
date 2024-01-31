@interface MessagesCloudSync.ChatRecordKeyedDataSource : NSObject <KeyedDataSource> {
    void /* unknown type, empty encoding */ chatRecord;
}

- (id)init;
- (id)arrayForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)sourceRecordChangeTag;
- (id)assetURLForKey:(id)a0;
- (id)dictForKey:(id)a0;
- (id)sourceRecordName;
- (id)sourceRecordType;

@end
