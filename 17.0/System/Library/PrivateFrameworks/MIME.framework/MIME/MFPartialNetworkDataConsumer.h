@class NSString, NSData;
@protocol MFGuaranteedCollectingDataConsumer;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
    NSData *_strippedData;
    unsigned long long _length;
    unsigned char _seenNetworkLineEndings : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (long long)appendData:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)length;
- (void)done;
- (id)data;
- (id)copyDataWithUnixLineEndings;

@end
