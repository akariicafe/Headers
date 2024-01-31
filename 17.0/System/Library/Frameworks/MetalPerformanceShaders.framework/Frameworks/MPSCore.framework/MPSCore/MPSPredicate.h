@protocol MTLBuffer;

@interface MPSPredicate : NSObject

@property (readonly, retain, nonatomic) id<MTLBuffer> predicateBuffer;
@property (readonly, nonatomic) unsigned long long predicateOffset;

+ (id)predicateWithBuffer:(id)a0 offset:(unsigned long long)a1;

- (id)debugQuickLookObject;
- (id)init;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (id)debugDescription;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1;

@end
