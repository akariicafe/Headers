@interface ANSTHand : ANSTObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long chirality;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)debugJSONDictionary;
- (id)initWithAcObject:(struct { unsigned int x0; unsigned int x1; int x2; struct { float x0; float x1; float x2; float x3; } x3; unsigned int x4; int x5; } *)a0;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4;
- (id)initWithObjectID:(unsigned long long)a0 groupID:(unsigned long long)a1 category:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 confidence:(unsigned long long)a4 chirality:(long long)a5;

@end
