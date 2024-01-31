@class NSArray, __end_cap_, NSMutableArray, __end_;

@interface CRDetectionResult : NSObject {
    struct vector<CRNormalizedQuad *, std::allocator<CRNormalizedQuad *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<CRNormalizedQuad *__strong *, std::allocator<CRNormalizedQuad *>> { id *__value_; } x1; } _tableRegions;
}

@property (readonly) NSArray *lines;
@property (retain, nonatomic) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize;
@property (retain, nonatomic) NSMutableArray *pyramidScaleName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLines:(id)a0;
- (void)setTableRegions:(const void *)a0;
- (const void *)tableRegions;

@end
