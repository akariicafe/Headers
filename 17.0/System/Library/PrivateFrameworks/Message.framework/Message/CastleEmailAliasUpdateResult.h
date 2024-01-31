@class NSDictionary, NSString;

@interface CastleEmailAliasUpdateResult : NSObject

@property (readonly, nonatomic) NSDictionary *receiveEmailAliasAddresses;
@property (readonly, nonatomic) NSDictionary *emailAddresses;
@property (readonly, nonatomic) NSString *defaultEmailAddress;
@property (readonly, nonatomic) BOOL accountNeedsToUpdateProperties;
@property (readonly, nonatomic) NSString *entityTag;
@property (readonly, nonatomic) BOOL isSuccess;
@property (readonly, nonatomic) BOOL notModified;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReceiveEmailAliasAddresses:(id)a0 emailAddresses:(id)a1 defaultEmailAddress:(id)a2 entityTag:(id)a3 isSuccess:(BOOL)a4 notModified:(BOOL)a5 accountNeedsToUpdateProperties:(BOOL)a6;

@end
