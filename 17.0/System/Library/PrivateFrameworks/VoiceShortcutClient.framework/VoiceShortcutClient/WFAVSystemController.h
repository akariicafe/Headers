@interface WFAVSystemController : NSObject

@property (readonly, nonatomic) BOOL silentModeActive;

- (id)avSystemController;
- (BOOL)setSilentMode:(BOOL)a0 reason:(id)a1 client:(long long)a2;
- (BOOL)toggleSilentModeWithReason:(id)a0 client:(long long)a1;

@end
