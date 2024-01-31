@class MLMultiArray;

@interface SLODLDInputTokenParams : NSObject

@property (retain, nonatomic) MLMultiArray *mlInputIds;
@property (retain, nonatomic) MLMultiArray *mlTypeIds;
@property (retain, nonatomic) MLMultiArray *mlAttnMask;
@property (retain, nonatomic) MLMultiArray *mlPadMask;

- (id)initWithShape:(id)a0;
- (void).cxx_destruct;
- (void)populateWithTokens:(id)a0;

@end
