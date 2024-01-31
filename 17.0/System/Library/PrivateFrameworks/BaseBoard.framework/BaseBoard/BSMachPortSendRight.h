@interface BSMachPortSendRight : BSMachPortRight <NSCopying>

+ (id)wrapSendRight:(unsigned int)a0;
+ (id)bootstrapLookUpWithName:(id)a0;
+ (id)bootstrapLookUpPortWithName:(id)a0;
+ (id)taskNamePortForPID:(int)a0;
+ (char)_type;

- (unsigned int)sendRight;
- (id)initWithSendRight:(unsigned int)a0;
- (id)initFromReceiveRight:(id)a0;
- (id)initWithPort:(unsigned int)a0;
- (id)initWithNonRetainingPort:(unsigned int)a0;
- (id)initWithCopyOfPort:(unsigned int)a0;
- (id)initWithCopyOfRight:(id)a0;
- (id)initWithSendRight:(unsigned int)a0 assumeOwnership:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
