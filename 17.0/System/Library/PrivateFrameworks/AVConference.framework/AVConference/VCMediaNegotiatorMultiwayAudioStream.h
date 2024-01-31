@class NSMutableSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>

@property (retain, nonatomic) NSMutableSet *supportedAudioPayloads;

- (id)init;
- (void)dealloc;
- (void)addPayload:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
