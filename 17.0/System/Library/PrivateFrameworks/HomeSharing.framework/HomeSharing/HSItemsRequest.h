@interface HSItemsRequest : HSRequest

@property (nonatomic) BOOL shouldParseResponse;
@property (nonatomic) BOOL includeHiddenItems;

+ (id)requestWithDatabaseID:(unsigned int)a0;
+ (id)requestWithDatabaseID:(unsigned int)a0 containerID:(unsigned int)a1;

- (id)initWithAction:(id)a0;
- (double)timeoutInterval;
- (id)initWithDatabaseID:(unsigned int)a0;
- (id)initWithDatabaseID:(unsigned int)a0 containerID:(unsigned int)a1;
- (id)canonicalResponseForResponse:(id)a0;

@end
