@class NSMutableDictionary;

@interface SKStateTransitionTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *entriesMap;
@property (retain, nonatomic) id selectorTarget;

+ (id)tableWithTransitionEntries:(id)a0;
+ (id)tableWithTransitionEntries:(id)a0 selectorTarget:(id)a1;

- (void).cxx_destruct;
- (id)entryForState:(id)a0 event:(id)a1;

@end
