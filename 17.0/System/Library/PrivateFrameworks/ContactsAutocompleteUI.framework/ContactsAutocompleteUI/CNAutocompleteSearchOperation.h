@class NSNumber, CNAutocompleteSearchManager, NSString;

@interface CNAutocompleteSearchOperation : NSOperation

@property (readonly, nonatomic) CNAutocompleteSearchManager *owner;
@property (readonly, nonatomic) NSNumber *taskID;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *sendingAddress;
@property (readonly, nonatomic) unsigned long long type;

+ (id)operationWithOwner:(id)a0 text:(id)a1 taskID:(id)a2;

- (void).cxx_destruct;

@end
