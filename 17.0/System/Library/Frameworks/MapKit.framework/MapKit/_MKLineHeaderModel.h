@class NSDictionary, NSMutableArray, UIView;

@interface _MKLineHeaderModel : NSObject {
    NSMutableArray *_tokens;
}

@property (weak, nonatomic) UIView *ownerView;
@property (copy, nonatomic) NSDictionary *fontAttribute;
@property (copy, nonatomic) id /* block */ colorProvider;
@property (nonatomic) BOOL shouldUseEmptyPlaceholder;

- (id)init;
- (void)insertToken:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (void)removeToken:(id)a0;
- (void).cxx_destruct;
- (void)addToken:(id)a0;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;

@end
