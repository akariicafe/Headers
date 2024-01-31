@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (id)nextObject;
- (void)done;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)initWithInputStream:(id)a0;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
