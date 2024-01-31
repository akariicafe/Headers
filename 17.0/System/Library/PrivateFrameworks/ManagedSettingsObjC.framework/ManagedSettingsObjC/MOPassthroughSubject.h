@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (id)init;
- (void)sendCompletion:(id)a0;
- (void)subscribe:(id)a0;
- (void)disassociate:(id)a0;
- (void)sendValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
