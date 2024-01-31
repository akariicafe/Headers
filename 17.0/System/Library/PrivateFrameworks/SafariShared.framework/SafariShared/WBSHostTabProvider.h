@protocol WBSHostableTab;

@interface WBSHostTabProvider : NSObject

@property (retain, nonatomic) id<WBSHostableTab> hostTab;

- (void).cxx_destruct;
- (void)_setHostTab:(id)a0;

@end
