@class NSNumber, NSArray;

@interface GDVUSocialGroup : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSNumber *numberOfMomentNodes;
@property (nonatomic, readonly) NSArray *tags;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNumberOfMomentNodes:(id)a0 tags:(id)a1;

@end
