@class NSUUID, _OSLogCollectionReference, _OSLogEventStoreMetadata, _OSLogEventStoreTimeRef, NSMutableArray, NSDate;

@interface OSLogEventSource : NSObject

@property (retain, nonatomic) NSMutableArray *_fileRefs;
@property (readonly, nonatomic) struct _os_timesync_db_s { } *tsdb;
@property (readonly, nonatomic) _OSLogCollectionReference *lcr;
@property (readonly, nonatomic) _OSLogEventStoreMetadata *lesm;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestTimeRef;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *newestTimeRef;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *oldestDate;
@property (readonly, nonatomic) NSDate *newestDate;

- (void)dealloc;
- (void)_enumerateIndexFiles:(id /* block */)a0;
- (id)initWithCollection:(id)a0 metadata:(id)a1 timesync:(struct _os_timesync_db_s { } *)a2;
- (void)_insertIndexFile:(id)a0;
- (void).cxx_destruct;

@end
