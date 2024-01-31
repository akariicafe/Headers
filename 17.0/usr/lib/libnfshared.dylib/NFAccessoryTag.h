@protocol NFAccessoryTagDelegate;

@interface NFAccessoryTag : NSObject

@property (weak, nonatomic) id<NFAccessoryTagDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
