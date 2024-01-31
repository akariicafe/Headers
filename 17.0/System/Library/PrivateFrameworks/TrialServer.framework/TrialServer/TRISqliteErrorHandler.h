@class NSString;
@protocol _PASSqliteErrorHandlerProtocol, TRIStorageManagementProtocol;

@interface TRISqliteErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol> {
    id<_PASSqliteErrorHandlerProtocol> _defaultErrorHandler;
    id<TRIStorageManagementProtocol> _storageManagement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleSqliteError:(int)a0 error:(id)a1 onError:(id /* block */)a2 db:(id)a3;
- (void).cxx_destruct;
- (id)initWithStorageManagement:(id)a0;

@end
