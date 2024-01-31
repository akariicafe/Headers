@class NSMutableData;

@interface VCPDataCompressor : NSObject {
    NSMutableData *_scratchData;
    NSMutableData *_resultData;
}

+ (id)compressor;

- (id)init;
- (void).cxx_destruct;
- (id)compressData:(id)a0;

@end
