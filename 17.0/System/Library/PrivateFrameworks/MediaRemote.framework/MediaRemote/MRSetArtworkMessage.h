@class NSData;

@interface MRSetArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *artworkData;

- (unsigned long long)type;
- (id)initWithArtworkData:(id)a0;

@end
