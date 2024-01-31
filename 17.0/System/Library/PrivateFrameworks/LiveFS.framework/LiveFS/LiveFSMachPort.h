@interface LiveFSMachPort : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int machPort;

+ (id)newByCopyingPort:(unsigned int)a0;

- (id)init;
- (void)dealloc;
- (id)initWithPort:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
