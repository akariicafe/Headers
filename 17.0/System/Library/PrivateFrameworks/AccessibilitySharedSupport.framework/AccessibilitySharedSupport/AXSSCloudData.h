@class CKServerChangeToken, NSArray, NSObject;
@protocol OS_os_transaction;

@interface AXSSCloudData : NSObject

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain, nonatomic) NSArray *recordsToUpdate;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSObject<OS_os_transaction> *openTransaction;

- (void).cxx_destruct;

@end
