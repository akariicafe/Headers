@class NSString, NSData, NSDate, _TtC8MapsSync19MapsSyncCommunityID;

@interface MapsSync.MapsSyncRAPRecord : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _summary;
    void /* unknown type, empty encoding */ _reportId;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _statusLastUpdatedDate;
    void /* unknown type, empty encoding */ _contentData;
    void /* unknown type, empty encoding */ _clientRevision;
    void /* unknown type, empty encoding */ _rapResponse;
    void /* unknown type, empty encoding */ _communityId;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *reportId;
@property (nonatomic, readonly) short status;
@property (nonatomic, readonly) NSDate *statusLastUpdatedDate;
@property (nonatomic, readonly) NSData *contentData;
@property (nonatomic, readonly) NSData *rapResponse;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncCommunityID *communityId;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
