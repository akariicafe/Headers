@interface IDSSocketPairHandshake : IDSSocketPairMessage

@property (readonly, nonatomic) unsigned int versionNumber;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithVersionNumber:(unsigned int)a0;

@end
