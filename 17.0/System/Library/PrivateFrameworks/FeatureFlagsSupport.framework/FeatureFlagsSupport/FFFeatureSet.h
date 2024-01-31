@class FFFeatureSetIdentifier, NSArray;

@interface FFFeatureSet : NSObject

@property (readonly, nonatomic) FFFeatureSetIdentifier *identifier;
@property (retain, nonatomic) NSArray *features;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 set:(id)a1;

@end
