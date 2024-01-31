@class NSString;

@interface PPSuggestedEvent : PPScoredEvent

@property (readonly, nonatomic) unsigned char category;
@property (readonly, nonatomic) NSString *eventIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPPEvent:(id)a0;
- (id)initWithPPEvent:(id)a0 score:(double)a1;

@end
