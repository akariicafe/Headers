@class NSMutableDictionary;

@interface SKUIAddToWishlistOperation : NSOperation {
    long long _itemIdentifier;
    long long _reason;
    NSMutableDictionary *_requestParameters;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 reason:(long long)a1;

@end
