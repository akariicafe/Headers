@class NSNumber;

@interface SetCarDefrosterIntent : INIntent

@property (nonatomic) long long defroster;
@property (nonatomic, retain) NSNumber *enabled;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
