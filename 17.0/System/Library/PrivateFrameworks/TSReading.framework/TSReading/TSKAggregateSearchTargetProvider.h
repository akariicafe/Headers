@class NSArray, NSString;

@interface TSKAggregateSearchTargetProvider : NSObject <TSKSearchTargetProvider>

@property (retain, nonatomic) NSArray *searchTargetProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSearchTargetProviders:(id)a0;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)a0 forString:(id)a1 options:(unsigned long long)a2 inDirection:(unsigned long long)a3;
- (void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)a0 direction:(unsigned long long)a1 action:(id /* block */)a2;
- (unsigned long long)p_firstTargetIndexForProvider:(id)a0;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)a0;
- (void)withRootSearchTargetAtIndex:(unsigned long long)a0 executeBlock:(id /* block */)a1;

@end
