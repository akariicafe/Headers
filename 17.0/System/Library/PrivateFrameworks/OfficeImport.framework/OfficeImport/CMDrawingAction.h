@interface CMDrawingAction : NSObject {
    int _type;
    id _value;
    float _floatValue;
}

- (void)dealloc;
- (float)floatValue;
- (id)description;
- (void).cxx_destruct;
- (id)value;
- (int)type;
- (id)initWithType:(int)a0 andFloatValue:(float)a1;
- (id)initWithType:(int)a0 andValue:(id)a1;

@end
