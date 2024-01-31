@interface MLCLSTMDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long hiddenSize;
@property (readonly, nonatomic) unsigned long long layerCount;
@property (readonly, nonatomic) BOOL usesBiases;
@property (readonly, nonatomic) BOOL batchFirst;
@property (readonly, nonatomic) BOOL isBidirectional;
@property (readonly, nonatomic) BOOL returnsSequences;
@property (readonly, nonatomic) float dropout;
@property (readonly, nonatomic) unsigned long long resultMode;

+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(BOOL)a3 isBidirectional:(BOOL)a4 dropout:(float)a5;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(BOOL)a3 batchFirst:(BOOL)a4 isBidirectional:(BOOL)a5 returnsSequences:(BOOL)a6 dropout:(float)a7 resultMode:(unsigned long long)a8;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(BOOL)a3 batchFirst:(BOOL)a4 isBidirectional:(BOOL)a5 dropout:(float)a6;
+ (id)descriptorWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(BOOL)a3 batchFirst:(BOOL)a4 isBidirectional:(BOOL)a5 returnsSequences:(BOOL)a6 dropout:(float)a7;

- (unsigned long long)hash;
- (id)description;
- (BOOL)bias;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfLayers;
- (id)initWithInputSize:(unsigned long long)a0 hiddenSize:(unsigned long long)a1 layerCount:(unsigned long long)a2 usesBiases:(BOOL)a3 batchFirst:(BOOL)a4 isBidirectional:(BOOL)a5 returnsSequences:(BOOL)a6 dropout:(float)a7 resultMode:(unsigned long long)a8;

@end
