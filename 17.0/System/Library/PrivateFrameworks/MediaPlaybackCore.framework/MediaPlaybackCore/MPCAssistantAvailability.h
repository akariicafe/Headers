@interface MPCAssistantAvailability : NSObject

- (void)assistantRadioGetAvailability:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a0 completion:(id /* block */)a1;
- (long long)assistantStreamingGetAvailability:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)assistantRadioGetAvailability:(id /* block */)a0;
- (long long)assistantStreamingGetAvailability;

@end
