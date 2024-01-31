@class PKSavingsAccountUserInfo;

@interface PKAccountWebServiceSavingsUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKSavingsAccountUserInfo *userInfo;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
