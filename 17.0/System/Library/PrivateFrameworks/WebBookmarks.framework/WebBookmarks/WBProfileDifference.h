@class NSSet;

@interface WBProfileDifference : NSObject

@property (readonly, nonatomic) unsigned long long result;
@property (readonly, copy, nonatomic) NSSet *settingsKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResult:(unsigned long long)a0 settingsKeys:(id)a1;

@end
