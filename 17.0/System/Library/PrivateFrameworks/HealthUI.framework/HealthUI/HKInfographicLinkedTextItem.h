@class NSString, NSAttributedString;

@interface HKInfographicLinkedTextItem : NSObject <HKInfographicItem>

@property (retain, nonatomic) NSAttributedString *descriptionString;
@property (copy, nonatomic) id /* block */ didTapLinkedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 didTapLinkedText:(id /* block */)a1;

@end
