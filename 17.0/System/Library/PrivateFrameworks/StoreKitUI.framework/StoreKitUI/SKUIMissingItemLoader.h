@class NSString, SKUIResourceLoader, NSMutableDictionary;
@protocol SKUIMissingItemDelegate;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property (nonatomic) long long batchSize;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (weak, nonatomic) id<SKUIMissingItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_existingRequestIDForItemID:(id)a0;
- (void)_requestItems:(id)a0 withReason:(long long)a1;
- (id)initWithResourceLoader:(id)a0;
- (void)itemRequest:(id)a0 didFinishWithItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (void)loadItemsForPageComponent:(id)a0 startIndex:(long long)a1 reason:(long long)a2;
- (void)loadItemsWithIdentifiers:(id)a0 reason:(long long)a1;

@end
