@class CRCTLD, CRCTLDConfig;

@interface CHCTLD : NSObject

@property (retain) CRCTLD *ctld;
@property (retain) CRCTLDConfig *ctldConfig;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)mergeStrokeGroups:(id)a0;
- (id)orderStrokeGroups:(id)a0;
- (id)strokeGroupRegions:(id)a0;

@end
