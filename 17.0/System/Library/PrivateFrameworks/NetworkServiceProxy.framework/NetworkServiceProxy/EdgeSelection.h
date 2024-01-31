@class NSData, NSMutableDictionary, NSNumber;

@interface EdgeSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *edgeAttributesDict;
@property (retain, nonatomic) NSData *networkSignature;
@property (retain, nonatomic) NSNumber *interfaceType;
@property (nonatomic) long long trialCount;
@property (nonatomic) double alpha;
@property (nonatomic) long long windowSize;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)_stochasticRewardFromRTT:(double)a0;
- (void)getAttributesForEdge:(id)a0 reply:(id /* block */)a1;
- (void)getMinimumLatencyEdge:(id /* block */)a0;
- (id)initWithNetworkSignature:(id)a0 interfaceType:(id)a1 modelParams:(id)a2;
- (void)trainEdgeSelectionModel:(id)a0 reply:(id /* block */)a1;

@end
