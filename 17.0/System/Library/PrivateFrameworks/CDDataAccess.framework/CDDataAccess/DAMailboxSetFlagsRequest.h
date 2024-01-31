@interface DAMailboxSetFlagsRequest : DAMailboxRequest

@property (nonatomic) unsigned long long onFlags;
@property (nonatomic) unsigned long long offFlags;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initRequestWithSetFlags:(unsigned long long)a0 unsetFlags:(unsigned long long)a1 message:(id)a2;

@end
