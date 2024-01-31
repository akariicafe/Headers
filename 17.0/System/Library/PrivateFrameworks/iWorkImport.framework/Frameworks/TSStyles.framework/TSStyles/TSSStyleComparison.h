@class TSSStyle;

@interface TSSStyleComparison : NSObject {
    TSSStyle *_first;
    TSSStyle *_second;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(id)a0 andStyle:(id)a1;

@end
