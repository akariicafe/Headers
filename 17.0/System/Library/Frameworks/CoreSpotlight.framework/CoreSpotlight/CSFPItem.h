@class NSString, CSSearchableItem, FPItem;

@interface CSFPItem : NSObject {
    FPItem *_internal;
}

@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) CSSearchableItem *searchableItem;

+ (id)itemWithFileURL:(id)a0;
+ (id)itemWithFileURL:(id)a0 forEUID:(unsigned int)a1;

- (void).cxx_destruct;
- (id)initWithFPItem:(id)a0;

@end
