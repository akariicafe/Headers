@class NSString;

@interface TIMockContact : NSObject

@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) float relevancyScore;

- (void).cxx_destruct;

@end
