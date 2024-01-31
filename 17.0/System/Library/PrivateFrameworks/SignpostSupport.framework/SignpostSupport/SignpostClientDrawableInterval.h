@class NSString;

@interface SignpostClientDrawableInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) unsigned int queueID;
@property (readonly, nonatomic) unsigned int surfaceID;
@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *executablePath;

- (void).cxx_destruct;
- (id)initWithClientDrawableInterval:(id)a0;

@end
