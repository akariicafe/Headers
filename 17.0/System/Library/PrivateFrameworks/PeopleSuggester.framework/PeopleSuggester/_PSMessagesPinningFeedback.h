@class NSString, NSArray, NSDate;

@interface _PSMessagesPinningFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *trialId;
@property (readonly, nonatomic) NSDate *eventDate;
@property (nonatomic) long long actionType;
@property (nonatomic) long long interactionMethod;
@property (readonly, nonatomic) NSArray *onboardingSuggestions;
@property (readonly, nonatomic) NSArray *actualPinnings;

+ (id)acceptedWithActualPinnings:(id)a0 OnboardingSuggestions:(id)a1;
+ (id)pinsChangedWithNowCurrentPins:(id)a0;
+ (id)skipOnboardingWithOnboardingSuggestions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 actualPinnings:(id)a1 onboardingSuggestions:(id)a2 trialId:(id)a3 eventDate:(id)a4;

@end
