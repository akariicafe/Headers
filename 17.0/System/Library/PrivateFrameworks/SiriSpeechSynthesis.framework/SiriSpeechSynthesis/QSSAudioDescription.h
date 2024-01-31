@class NSData, NSMutableDictionary;

@interface QSSAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AudioDescription { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) double sample_rate;
@property (readonly, nonatomic) unsigned int format_id;
@property (readonly, nonatomic) unsigned int format_flags;
@property (readonly, nonatomic) unsigned int bytes_per_packet;
@property (readonly, nonatomic) unsigned int frames_per_packet;
@property (readonly, nonatomic) unsigned int bytes_per_frame;
@property (readonly, nonatomic) unsigned int channels_per_frame;
@property (readonly, nonatomic) unsigned int bits_per_channel;
@property (readonly, nonatomic) unsigned int reserved;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::AudioDescription> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioDescription { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AudioDescription { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
