@class NSMutableData;

@interface VCPDataDecompressor : NSObject {
    NSMutableData *_scratchData;
    NSMutableData *_resultData;
}

+ (id)decompressor;

- (id)init;
- (void).cxx_destruct;
- (id)decompressData:(id)a0;

@end
