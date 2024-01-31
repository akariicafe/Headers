@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {
    long long _configurationID;
    BWFormat *_updatedFormat;
}

@property (readonly) long long configurationID;
@property (readonly) BWFormat *updatedFormat;

+ (id)newMessageWithConfigurationID:(long long)a0;
+ (id)newMessageWithConfigurationID:(long long)a0 updatedFormat:(id)a1;

- (void)dealloc;

@end
