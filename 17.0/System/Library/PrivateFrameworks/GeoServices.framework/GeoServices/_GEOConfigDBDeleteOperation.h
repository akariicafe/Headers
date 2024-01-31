@class NSString, _GEOConfigDB;

@interface _GEOConfigDBDeleteOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB *_configDB;
    long long _rowId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performOperation;
- (id)init:(id)a0 rowId:(long long)a1;
- (void).cxx_destruct;

@end
