@class NSString;

@interface ACCVoiceOverAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID;
@property (nonatomic) BOOL desiredVoiceOverState;

- (void).cxx_destruct;
- (id)initWithAccessoryUID:(id)a0;

@end
