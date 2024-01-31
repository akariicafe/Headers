@class NSArray, NSData, ENAccountIdentity;

@interface _ENGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ENAccountIdentity *accountIdentity;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSData *sharedApplicationData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountIdentity:(id)a0 paricipants:(id)a1 sharedApplicationData:(id)a2;

@end
