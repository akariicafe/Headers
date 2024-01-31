@class NSString, NSNumber;

@interface AAFamilyInvite : NSObject

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *organizerFirstName;
@property (copy, nonatomic) NSString *organizerLastName;
@property (copy, nonatomic) NSString *organizerEmail;
@property (copy, nonatomic) NSNumber *organizerDSID;
@property (copy, nonatomic) NSNumber *recepientDSID;
@property (nonatomic) BOOL isChildTransferInvite;
@property (copy, nonatomic) NSString *childFirstName;
@property (copy, nonatomic) NSString *childLastName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
