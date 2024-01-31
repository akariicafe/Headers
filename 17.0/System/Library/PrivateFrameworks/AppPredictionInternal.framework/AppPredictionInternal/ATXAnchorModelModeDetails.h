@class NSString;

@interface ATXAnchorModelModeDetails : NSObject

@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) BOOL isStart;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModeUUID:(id)a0 isStart:(BOOL)a1;

@end
