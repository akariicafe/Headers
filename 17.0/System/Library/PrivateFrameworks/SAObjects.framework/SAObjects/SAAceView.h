@class NSString, SADialog, NSDictionary, NSNumber, SAUIListenAfterSpeakingBehavior;
@protocol SAAceSerializable;

@interface SAAceView : SABaseAceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canBeRefreshed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSNumber *deferredRendering;
@property (copy, nonatomic) NSNumber *delayDismissalMs;
@property (retain, nonatomic) SADialog *dialog;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL isTransient;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *correspondingSessionID;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic) BOOL preserveResultSpaceIfPossible;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
