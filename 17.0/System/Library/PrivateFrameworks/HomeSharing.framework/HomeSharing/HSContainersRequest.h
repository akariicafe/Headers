@interface HSContainersRequest : HSRequest

@property (nonatomic) BOOL shouldParseResponse;

+ (id)requestWithDatabaseID:(unsigned int)a0;

- (id)initWithAction:(id)a0;
- (id)initWithDatabaseID:(unsigned int)a0;
- (id)canonicalResponseForResponse:(id)a0;

@end
