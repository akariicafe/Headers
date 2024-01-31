@class NSArray, NSMutableDictionary, SKUIScreenshot;

@interface SKUISearchItem : SKUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property (readonly, nonatomic) SKUIScreenshot *primaryScreenshot;
@property (readonly, nonatomic) NSArray *screenshots;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;
- (id)childItemForIdentifier:(id)a0;
- (id)childItemIdentifiers;
- (id)loadedChildItems;
- (void)setChildItem:(id)a0 forIdentifier:(id)a1;

@end
