@class NSDictionary;

@interface CSComplicationLayout : NSObject

@property (readonly, nonatomic) NSDictionary *framesByElement;
@property (readonly, nonatomic) long long draggedItemInsertionIndex;

- (id)_initWithFramesByElement:(id)a0 draggedItemInsertionIndex:(long long)a1;
- (void).cxx_destruct;

@end
