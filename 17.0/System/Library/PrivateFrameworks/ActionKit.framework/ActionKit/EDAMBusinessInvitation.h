@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *requesterId;
@property (retain, nonatomic) NSNumber *fromWorkChat;
@property (retain, nonatomic) NSNumber *created;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
