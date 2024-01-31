@interface HKOverlayContextLocation : NSObject

@property (readonly, nonatomic) long long containerIndex;
@property (readonly, nonatomic) long long sectionIndex;
@property (readonly, nonatomic) long long itemIndex;

- (BOOL)isEqual:(id)a0;
- (id)initWithContainerIndex:(long long)a0 sectionIndex:(long long)a1 itemIndex:(long long)a2;

@end
