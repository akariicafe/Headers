@class NSString, MPModelSocialPerson;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (readonly, nonatomic) long long action;
@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryItems;
- (id)initWithAction:(long long)a0;
- (id)httpBody;
- (id)bagKey;
- (void).cxx_destruct;
- (long long)httpMethod;
- (id)fallbackBagKeys;
- (id)_actionTypeString;
- (long long)httpBodyType;

@end
