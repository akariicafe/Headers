@interface MPSImageDescriptor : NSObject <NSCopying> {
    unsigned long long _cacheMode;
    unsigned long long _featureChannelFormat;
}

@property (nonatomic) unsigned long long featureChannelsLayout;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long featureChannels;
@property (nonatomic) unsigned long long numberOfImages;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long channelFormat;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long usage;

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 featureChannels:(unsigned long long)a3 numberOfImages:(unsigned long long)a4 usage:(unsigned long long)a5;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 featureChannels:(unsigned long long)a3;

- (id)debugQuickLookObject;
- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newTextureDescriptor;

@end
