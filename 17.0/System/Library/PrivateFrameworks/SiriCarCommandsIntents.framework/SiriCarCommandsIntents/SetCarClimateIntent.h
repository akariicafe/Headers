@class NSNumber, INSpeakableString;

@interface SetCarClimateIntent : INIntent

@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *isSetCarActivationStatusRequest;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
