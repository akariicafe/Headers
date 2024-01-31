@class INSpeakableString;

@interface GetTrunkStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
