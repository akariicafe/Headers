@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)_removeAnonymousShareFromSharedDB;

@end
