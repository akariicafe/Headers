@class NSMutableArray, WDList, WDListDefinition;

@interface CMOutlineState : NSObject {
    NSMutableArray *_counters;
}

@property (readonly) WDListDefinition *listDefinition;
@property (retain) WDList *currentList;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (unsigned long long)levelCount;
- (unsigned long long)counterAtLevel:(unsigned char)a0;
- (void)increaseCounterAtLevel:(unsigned char)a0;
- (id)initWithListDefinition:(id)a0;
- (id)levelDescriptionAtIndex:(unsigned char)a0;
- (void)setCounterTo:(unsigned long long)a0 atLevel:(unsigned char)a1;

@end
