@class NSDictionary, NSArray, NSSet;
@protocol FCContentContext;

@interface FCCheckDraftContentAccessOperation : FCOperation

@property (copy, nonatomic) NSDictionary *resultAccessByContentID;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *channelMemberships;
@property (copy, nonatomic) NSSet *issueIDs;
@property (copy, nonatomic) NSSet *articleIDs;
@property (copy, nonatomic) id /* block */ checkAccessCompletion;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
