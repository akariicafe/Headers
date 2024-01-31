@class NSString, MSCommunityID, NSData, NSDate;

@interface MSRAPRecord : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _clientRevision;
    void /* unknown type, empty encoding */ _contentData;
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rapResponse;
    void /* unknown type, empty encoding */ _reportId;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _statusLastUpdatedDate;
    void /* unknown type, empty encoding */ _summary;
    void /* unknown type, empty encoding */ _type;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) short clientRevision;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;
@property (nonatomic, readonly) MSCommunityID *communityID;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 clientRevision:(short)a1 contentData:(id)a2 countryCode:(id)a3 positionIndex:(long long)a4 rapResponse:(id)a5 reportId:(id)a6 status:(short)a7 statusLastUpdatedDate:(id)a8 summary:(id)a9 type:(short)a10;
- (BOOL)setCommunityID:(id)a0 error:(id *)a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
