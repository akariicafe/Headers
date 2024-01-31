@class PAAccess;

@interface PAOngoingAccessIntervalState : NSObject

@property (retain, nonatomic) PAAccess *access;
@property (nonatomic) long long retryCount;

- (void).cxx_destruct;
- (id)initWithAccess:(id)a0;

@end
