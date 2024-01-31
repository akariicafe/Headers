@class NSString, NSArray;

@interface SGModelHead : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;
@property (readonly, nonatomic) NSArray *labels;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
