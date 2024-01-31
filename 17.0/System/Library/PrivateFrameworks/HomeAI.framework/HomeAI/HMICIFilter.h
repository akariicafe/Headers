@class NSString, NSArray;

@interface HMICIFilter : HMFObject

@property (readonly) NSString *name;
@property (readonly) double probability;
@property (readonly) NSArray *attributes;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)attributeForKey:(id)a0;
- (id)applyToImage:(id)a0 withProbability:(double)a1;
- (id)expectedAttributeForKey:(id)a0;

@end
