@class INSpeakableString, NSNumber;

@interface GetSignalActivationStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *carSignal;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
