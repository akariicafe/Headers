@interface GTReplayResponseStream : GTReplayResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithState:(unsigned int)a0;
- (id)initWithCoder:(id)a0;

@end
