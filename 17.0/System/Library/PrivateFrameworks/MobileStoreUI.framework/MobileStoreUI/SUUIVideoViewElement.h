@class NSArray, SUUIImageViewElement;

@interface SUUIVideoViewElement : SUUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) SUUIImageViewElement *thumbnailImage;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
