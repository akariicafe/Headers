@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
}

@property (nonatomic) long long maxCount;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)countInstances:(id)a0 usingPredicate:(id /* block */)a1;
- (id)highestMatches;

@end
