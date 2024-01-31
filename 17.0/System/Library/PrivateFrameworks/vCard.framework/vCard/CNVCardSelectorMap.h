@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject {
    NSMutableArray *_strings;
    NSMutableArray *_selectors;
}

- (id)init;
- (void).cxx_destruct;
- (SEL)selectorForString:(id)a0;
- (void)setSelector:(SEL)a0 forString:(id)a1;

@end
