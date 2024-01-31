@interface WFVolumeButtonManager : NSObject

@property (copy, nonatomic) id /* block */ pressHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPressHandler:(id /* block */)a0;
- (void)volumeButtonPressed;

@end
