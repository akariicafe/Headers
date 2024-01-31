@class NSUUID, SFProxyText, NSString;

@interface SFAirDropTransferChange : NSObject <NSSecureCoding, BSXPCSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *proxyIdentifier;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) SFProxyText *displayName;
@property (readonly, nonatomic) SFProxyText *status;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProxyIdentifier:(id)a0 progress:(double)a1 displayName:(id)a2 status:(id)a3 state:(long long)a4;

@end
