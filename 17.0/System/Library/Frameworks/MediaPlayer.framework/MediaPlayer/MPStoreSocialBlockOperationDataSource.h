@class NSString, MPModelSocialPerson;

@interface MPStoreSocialBlockOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryItems;
- (id)httpBody;
- (id)bagKey;
- (void).cxx_destruct;
- (long long)httpMethod;
- (long long)httpBodyType;

@end
