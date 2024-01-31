@class ETModelDef, NSString;

@interface ETVariable : NSObject

@property (weak, nonatomic) ETModelDef *model;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *layerName;
@property unsigned long long initializationMode;
@property float initializationAlpha;
@property float initializationBeta;

- (void)updateWithData:(id)a0;
- (id)copyData;
- (void).cxx_destruct;
- (id)getOpaqueCopy;
- (id)initWithModelDef:(id)a0;
- (id)swapWithOpaqueCopy:(id)a0;

@end
