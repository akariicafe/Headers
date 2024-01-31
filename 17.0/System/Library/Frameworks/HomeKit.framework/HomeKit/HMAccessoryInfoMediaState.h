@class NSString;

@interface HMAccessoryInfoMediaState : NSObject

@property (readonly, copy) NSString *mediaIdentifier;
@property (readonly) double volume;
@property (readonly) long long playbackState;
@property (readonly) long long shuffleState;
@property (readonly) long long repeatState;

- (unsigned long long)hash;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMediaIdentifier:(id)a0 volume:(double)a1 playbackState:(long long)a2 shuffleState:(long long)a3 repeatState:(long long)a4;
- (id)initWithProtoPayload:(id)a0;
- (id)protoData;
- (id)protoPayload;

@end
