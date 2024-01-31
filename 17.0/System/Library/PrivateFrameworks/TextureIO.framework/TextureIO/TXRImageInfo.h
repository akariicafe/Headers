@class NSError;
@protocol TXRBuffer;

@interface TXRImageInfo : NSObject

@property (nonatomic) unsigned long long offset;
@property (retain, nonatomic) id<TXRBuffer> buffer;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned long long bytesPerImage;
@property (retain) NSError *error;

- (void).cxx_destruct;

@end
