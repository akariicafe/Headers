@class INSpeakableString;

@interface SetTrunkStatusIntent : INIntent

@property (nonatomic) long long trunkStatus;
@property (nonatomic, retain) INSpeakableString *carName;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
