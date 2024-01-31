@class NSNumber, NSMutableDictionary, NSValue;

@interface OZARPersonInfo : NSObject

@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSMutableDictionary *jointTransforms;
@property (retain, nonatomic) NSValue *transform;
@property (retain, nonatomic) NSValue *worldSize;
@property (retain, nonatomic) NSValue *boundingBox;

- (id)init:(id)a0;
- (id)init;
- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform:(long long)a0;

@end
