@class NSString;

@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (copy, nonatomic) NSString *groupID;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (unsigned long long)type;
- (id)initWithGroupID:(id)a0;

@end
