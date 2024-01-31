@class NSString, CHSWidget;
@protocol BSInvalidatable;

@interface _ATXChronoServicesProviderRecord : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CHSWidget *widget;
@property (retain, nonatomic) id<BSInvalidatable> widgetHandle;
@property (retain, nonatomic) NSString *suggestedStackId;

- (void).cxx_destruct;

@end
