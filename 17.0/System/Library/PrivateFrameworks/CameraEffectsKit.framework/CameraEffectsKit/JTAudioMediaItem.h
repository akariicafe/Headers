@interface JTAudioMediaItem : JFXMediaItem

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)info;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasAudibleCharacteristic;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
