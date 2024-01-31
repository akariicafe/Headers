@class CKRecordZoneID;

@interface _DKEventCKConverter : NSObject {
    CKRecordZoneID *_zoneID;
}

- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0;
- (id)eventIDsFromRecordIDsAndTypes:(id)a0;
- (id)eventsFromRecords:(id)a0;
- (id)recordIDsFromEventIDs:(id)a0;
- (id)recordsFromEvents:(id)a0;

@end
