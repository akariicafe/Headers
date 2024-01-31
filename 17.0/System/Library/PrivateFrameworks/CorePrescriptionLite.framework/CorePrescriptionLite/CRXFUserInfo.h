@class NSString;

@interface CRXFUserInfo : NSObject

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *firstName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUserID:(id)a0 firstName:(id)a1;

@end
