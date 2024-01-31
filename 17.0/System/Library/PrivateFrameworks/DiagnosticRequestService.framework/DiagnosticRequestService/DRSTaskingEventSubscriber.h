@class NSString;

@interface DRSTaskingEventSubscriber : NSObject

@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSString *teamID;

- (void)dealloc;
- (id)initWithTeamID:(id)a0 token:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
