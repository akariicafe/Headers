@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (void).cxx_destruct;

@end
