@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1;

@end
