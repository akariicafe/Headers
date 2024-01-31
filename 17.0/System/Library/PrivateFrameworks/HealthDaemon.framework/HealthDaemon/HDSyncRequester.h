@class HDProfile;

@interface HDSyncRequester : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) id /* block */ unitTesting_willRequestSyncsHandler;

- (id)init;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)requestSyncsWithReason:(id)a0 options:(unsigned long long)a1;
- (void)requestSyncsWithReason:(id)a0;

@end
