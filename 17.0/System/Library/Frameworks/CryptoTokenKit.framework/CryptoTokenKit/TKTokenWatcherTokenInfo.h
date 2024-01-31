@class NSString;

@interface TKTokenWatcherTokenInfo : NSObject

@property (readonly, nonatomic) NSString *tokenID;
@property (readonly, nonatomic) NSString *slotName;
@property (readonly, nonatomic) NSString *driverName;

- (void).cxx_destruct;
- (id)initWithTokenInfo:(id)a0;

@end
