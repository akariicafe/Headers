@class UIImage, NSArray, NSString, PKPassShare, PKContact, PKPassShareActivationOptions, NSURL;

@interface PKPassShareInitiationContext : NSObject

@property (nonatomic) unsigned long long flow;
@property (nonatomic) unsigned long long environment;
@property (retain, nonatomic) NSArray *blockedChannels;
@property (retain, nonatomic) NSArray *allowedChannels;
@property (retain, nonatomic) NSString *channelBundleIdentifier;
@property (retain, nonatomic) PKPassShare *composedShare;
@property (nonatomic) BOOL hasModifiedEntitlements;
@property (nonatomic) BOOL didCreateShare;
@property (nonatomic) unsigned long long authenticationType;
@property (readonly, nonatomic) PKContact *recipient;
@property (retain, nonatomic) PKPassShareActivationOptions *availableActivationOptions;
@property (nonatomic, getter=areActivationOptionsUserEditable) BOOL activationOptionsUserEditable;
@property (readonly, nonatomic) BOOL requiresContactSelection;
@property (retain, nonatomic) NSString *sharePreviewTitle;
@property (retain, nonatomic) NSString *sharePreviewSubtitle;
@property (retain, nonatomic) NSURL *sharePreviewImageURL;
@property (retain, nonatomic) UIImage *sharePreviewFallbackImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFlow:(unsigned long long)a0 share:(id)a1;
- (BOOL)isShareConfiguredEnoughToBeSentOverChannelWithDisplayableError:(id *)a0 pass:(id)a1;
- (void)setRecipient:(id)a0 fallbackNickname:(id)a1;

@end
