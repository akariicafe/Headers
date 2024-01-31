@class NSString, NSArray;

@interface VITextContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *surroundingText;
@property (readonly, copy, nonatomic) NSArray *normalizedBoundingBoxes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSurroundingText:(id)a0 normalizedBoundingBoxes:(id)a1;

@end
