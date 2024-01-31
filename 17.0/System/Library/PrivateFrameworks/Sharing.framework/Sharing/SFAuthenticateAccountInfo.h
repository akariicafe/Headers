@class NSString;

@interface SFAuthenticateAccountInfo : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *altDSID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 altDSID:(id)a1;

@end
