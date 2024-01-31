@class NBObjCURLHasher;

@interface NBURLHasher : NSObject

@property (readonly, nonatomic) NBObjCURLHasher *hasher;

- (id)init;
- (void).cxx_destruct;
- (id)hashForURL:(id)a0 maxLength:(unsigned long long)a1;

@end
