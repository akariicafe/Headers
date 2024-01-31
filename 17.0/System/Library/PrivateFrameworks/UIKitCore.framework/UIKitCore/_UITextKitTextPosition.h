@protocol NSTextLocation;

@interface _UITextKitTextPosition : UITextPosition

@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long affinity;
@property (readonly, nonatomic) id<NSTextLocation> location;

+ (id)positionWithTextContentManager:(id)a0 location:(id)a1 affinity:(long long)a2;
+ (id)positionWithOffset:(long long)a0 affinity:(long long)a1;
+ (id)positionWithOffset:(long long)a0;

- (id)init;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
