@interface TCDialRequest : TUDialRequest

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted;

- (id)initWithURL:(id)a0;
- (id)URL;

@end
