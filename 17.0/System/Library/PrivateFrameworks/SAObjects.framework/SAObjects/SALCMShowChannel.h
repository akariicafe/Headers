@class SALCMTvChannel;

@interface SALCMShowChannel : SABaseClientBoundCommand

@property (retain, nonatomic) SALCMTvChannel *channel;

+ (id)showChannel;
+ (id)showChannelWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
