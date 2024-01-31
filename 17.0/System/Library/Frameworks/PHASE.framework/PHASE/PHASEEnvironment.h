@class PHASEMedium, NSArray;

@interface PHASEEnvironment : PHASEObject

@property (retain, nonatomic) PHASEMedium *medium;
@property (nonatomic) float mediumScaleFactor;
@property (readonly, copy, nonatomic) NSArray *shapes;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEngine:(id)a0 shapes:(id)a1;

@end
