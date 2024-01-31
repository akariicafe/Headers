@class NSString;

@interface DADREMXPCPerformerDelegate : NSObject

@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSString *delegateID;
@property (copy, nonatomic) id /* block */ remXPCCompletion;

- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (void)finishWithError:(id)a0;

@end
