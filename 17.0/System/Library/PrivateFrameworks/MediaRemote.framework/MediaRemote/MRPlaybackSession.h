@class NSString, NSData, _MRPlaybackSessionProtobuf;

@interface MRPlaybackSession : NSObject

@property (readonly, nonatomic) _MRPlaybackSessionProtobuf *protobuf;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSData *playbackSessionData;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *revision;
@property (readonly, copy, nonatomic) NSData *metadata;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(id)a1 playbackSessionData:(id)a2 revision:(id)a3 metadata:(id)a4;

@end
