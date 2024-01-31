@class NSError;
@protocol TXRBuffer, TXRDataSourceProvider;

@interface TXRImage : NSObject <NSCopying> {
    unsigned long long _bytesPerImage;
    unsigned long long _bytesPerRow;
    long long _face;
    unsigned long long _element;
    unsigned long long _level;
    id<TXRDataSourceProvider> _dataSourceProvider;
}

@property (readonly) unsigned long long offset;
@property (readonly) id<TXRBuffer> buffer;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) unsigned long long bytesPerImage;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deferredProvide;
- (id)initAsLevel:(unsigned long long)a0 element:(unsigned long long)a1 face:(unsigned long long)a2 dataSourceProvider:(id)a3;
- (id)initWithBytesPerRow:(unsigned long long)a0 bytesPerImage:(unsigned long long)a1 buffer:(id)a2 offset:(unsigned long long)a3;

@end
