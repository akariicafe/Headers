@class NSMutableArray;

@interface SKUITabularLockupColumn : NSObject

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, copy, nonatomic) NSMutableArray *childViewElements;

- (id)description;
- (void).cxx_destruct;
- (void)_addChildViewElement:(id)a0;
- (id)initWithColumnIdentifier:(long long)a0;

@end
