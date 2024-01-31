@class NSString, NSAttributedString;

@interface HKInfographicTextItem : NSObject <HKInfographicItem>

@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;

@end
