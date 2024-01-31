@interface MLCDeviceOps : NSObject <NSCopying>

@property (retain, nonatomic) id source;
@property (retain, nonatomic) id secondarySource;
@property (retain, nonatomic) id tertiarySource;
@property (retain, nonatomic) id result;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) BOOL sourceOfForwardNeededForGradient;
@property (nonatomic) BOOL resultOfForwardNeededForGradient;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSource:(id)a0 secondarySource:(id)a1 result:(id)a2 batchSize:(unsigned long long)a3;

@end
