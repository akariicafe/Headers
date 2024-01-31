@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent>

@property (readonly, nonatomic) NSArray *jointPaths;
@property (readonly, nonatomic) NSData *jointBindTransforms;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } meshBindTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJointPaths:(id)a0 jointBindTransforms:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a1 count:(unsigned long long)a2 meshBindTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (unsigned long long)copyJointBindTransformsInto:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (id)initWithJointPaths:(id)a0 jointBindTransforms:(id)a1 meshBindTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

@end
