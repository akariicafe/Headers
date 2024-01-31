@class BKIdentity;

@interface _LABKMatchResultInfo : NSObject

@property (retain, nonatomic) BKIdentity *identity;
@property (nonatomic) long long lockoutState;

- (void).cxx_destruct;

@end
