@class NSArray;

@interface BMPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;

- (id)init;
- (id)merge;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;

@end
