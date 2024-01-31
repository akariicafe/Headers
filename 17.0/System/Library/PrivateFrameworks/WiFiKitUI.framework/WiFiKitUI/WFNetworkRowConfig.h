@class NSString;
@protocol WFNetworkListRecord;

@interface WFNetworkRowConfig : NSObject

@property (retain, nonatomic) id<WFNetworkListRecord> network;
@property (nonatomic) unsigned long long context;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long connectionState;
@property (nonatomic) BOOL problematicConnection;
@property (nonatomic) unsigned long long signalBars;
@property (nonatomic) BOOL hideConnectionState;
@property (nonatomic) BOOL showInfoButton;
@property (copy) id /* block */ infoButtonHandler;

+ (id)knownNetworkRowConfig;
+ (id)settingsNetworkRowConfig;
+ (id)setupNetworkRowConfig;

- (id)init;
- (void).cxx_destruct;

@end
