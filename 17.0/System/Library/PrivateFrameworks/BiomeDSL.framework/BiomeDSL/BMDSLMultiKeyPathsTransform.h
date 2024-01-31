@class NSArray;

@interface BMDSLMultiKeyPathsTransform : BMDSLBaseCodable <BMDSLTransform>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *keyPaths;

+ (id)withKeyPaths:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyPaths:(id)a0;
- (id)transformInput:(id)a0 combinedState:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPaths:(id)a0 name:(id)a1 version:(unsigned int)a2;

@end
