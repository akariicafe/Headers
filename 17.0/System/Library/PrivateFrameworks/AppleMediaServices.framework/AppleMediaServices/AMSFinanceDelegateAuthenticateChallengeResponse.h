@class NSDictionary, NSString, AMSURLTaskInfo;

@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject <AMSFinancePerformable>

@property (retain, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDelegateAuthChallengeForTaskInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 taskInfo:(id)a1;
- (id)performWithTaskInfo:(id)a0;

@end
