@interface APOdmlAppVector : APOdmlVector

@property (readonly, nonatomic) unsigned long long adamID;

- (id)data;
- (id)description;
- (id)initWithString:(id)a0 version:(id)a1;
- (id)initWithVersion:(id)a0 header:(struct APOdmlAppVectorHeader { unsigned long long x0; unsigned int x1; unsigned int x2; } *)a1 floats:(float *)a2;

@end
