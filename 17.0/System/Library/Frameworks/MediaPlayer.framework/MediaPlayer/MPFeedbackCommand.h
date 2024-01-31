@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {
    long long _presentationStyle;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;

- (void)setPresentationStyle:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (long long)presentationStyle;
- (void).cxx_destruct;
- (id)newCommandEventWithState:(long long)a0;

@end
