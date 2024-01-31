@class NSObject;
@protocol PTSerializable;

@interface PTGlobalVideoMetadata : NSObject {
    NSObject<PTSerializable> *_atoms[5];
}

+ (void)initialize;
+ (id)deserializeMetadataWithType:(unsigned int)a0 fromGlobalMetadata:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)setMetadata:(id)a0 ofType:(unsigned int)a1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (unsigned int)_sizeOfAtomOfType:(unsigned int)a0 withOptions:(id)a1;

@end
