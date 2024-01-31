@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) CNContact *primaryUser;

+ (BOOL)jsonDataOptional;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)_stringValueFromDictionary:(id)a0 key:(id)a1 isOptional:(BOOL)a2;

@end
