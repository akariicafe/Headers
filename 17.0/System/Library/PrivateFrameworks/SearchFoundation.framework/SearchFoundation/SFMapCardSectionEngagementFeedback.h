@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (retain, nonatomic) NSData *modifiedPlacemarkData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
