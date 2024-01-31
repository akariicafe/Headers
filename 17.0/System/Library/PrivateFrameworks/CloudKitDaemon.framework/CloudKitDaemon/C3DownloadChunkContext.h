@class CKDMMCS, NSMutableDictionary;

@interface C3DownloadChunkContext : NSObject

@property (weak, nonatomic) CKDMMCS *MMCS;
@property (retain, nonatomic) NSMutableDictionary *signatureToMutableData;

- (void).cxx_destruct;
- (id)initWithMMCS:(id)a0;

@end
