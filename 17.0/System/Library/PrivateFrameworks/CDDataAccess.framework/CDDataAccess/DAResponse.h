@interface DAResponse : DAAction

@property (nonatomic) long long status;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 serverId:(id)a2 status:(long long)a3;

@end
