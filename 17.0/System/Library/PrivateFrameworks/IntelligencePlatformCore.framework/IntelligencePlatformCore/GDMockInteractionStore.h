@class NSArray;

@interface GDMockInteractionStore : NSObject {
    NSArray *_interactions;
}

- (void).cxx_destruct;
- (id)queryInteractionsUsingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 error:(id *)a4;
- (id)cdStore;
- (id)initWithInteractions:(id)a0;

@end
