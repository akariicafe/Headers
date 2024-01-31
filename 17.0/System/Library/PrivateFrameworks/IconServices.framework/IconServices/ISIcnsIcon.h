@class NSData, ISIcns;

@interface ISIcnsIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *icnsData;
@property (retain) ISIcns *internalICNS;
@property (readonly) ISIcns *icns;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;
- (id)icns;
- (id)initWithContentOfURL:(id)a0;
- (id)initWithIcns:(id)a0;
- (id)initWithIcnsData:(id)a0;

@end
