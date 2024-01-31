@class NSDictionary, NSString;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) unsigned long long bufferType;
@property (readonly, nonatomic) unsigned long long captureFrameFlags;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *metadataTag;
@property (readonly, nonatomic) NSString *rawThumbnailsBufferTag;
@property (readonly, nonatomic) NSString *rawThumbnailsMetadataTag;
@property (readonly, nonatomic) NSString *mainRawThumbnailBufferTag;
@property (readonly, nonatomic) NSString *mainRawThumbnailMetadataTag;
@property (readonly, nonatomic) NSString *sifrRawThumbnailBufferTag;
@property (readonly, nonatomic) NSString *sifrRawThumbnailMetadataTag;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int compressionProfile;

+ (BOOL)supportsSecureCoding;

- (unsigned int)pixelFormat;
- (void)dealloc;
- (int)flush;
- (void)encodeWithCoder:(id)a0;
- (int)setBuffer:(struct __CVBuffer { } *)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)archive:(int *)a0;
- (id)fetchAndRetain:(int *)a0;
- (id)_shortString;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 captureFrameFlags:(unsigned long long)a3 metadataTag:(id)a4 portType:(id)a5 compressionProfile:(int)a6 URL:(id)a7;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 bufferType:(unsigned long long)a2 captureFrameFlags:(unsigned long long)a3 metadataTag:(id)a4 rawThumbnailsBufferTag:(id)a5 rawThumbnailsMetadataTag:(id)a6 mainRawThumbnailBufferTag:(id)a7 mainRawThumbnailMetadataTag:(id)a8 sifrRawThumbnailBufferTag:(id)a9 sifrRawThumbnailMetadataTag:(id)a10 portType:(id)a11 compressionProfile:(int)a12 URL:(id)a13;
- (void)releaseBuffer;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;

@end
