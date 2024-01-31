@class NSString, GEOSQLiteDB, GEOConfigExpiringKey;

@interface _GEOConfigDBUpdateExpireOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    GEOSQLiteDB *_db;
    GEOConfigExpiringKey *_expire;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performOperation;
- (void).cxx_destruct;
- (id)init:(id)a0 expire:(id)a1;

@end
