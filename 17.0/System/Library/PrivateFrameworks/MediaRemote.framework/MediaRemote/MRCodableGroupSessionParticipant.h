@class NSString, MRUserIdentity;

@interface MRCodableGroupSessionParticipant : NSObject <MRGroupSessionParticipant, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUserIdentity *identity;
@property (nonatomic, getter=isPending) BOOL pending;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic, getter=isHost) BOOL host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 identity:(id)a1;

@end
