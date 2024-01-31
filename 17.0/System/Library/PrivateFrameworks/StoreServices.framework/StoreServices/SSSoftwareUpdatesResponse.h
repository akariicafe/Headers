@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {
    NSError *_error;
    BOOL _failed;
    NSArray *_updateItems;
}

@property (readonly) NSError *error;
@property (readonly, getter=isFailed) BOOL failed;
@property (readonly) NSArray *updateItems;

- (id)initWithError:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyUpdateItemDictionaries;
- (void)setUpdateItemsWithItemDictionaries:(id)a0;

@end
