@class NSDictionary, NSString;

@interface TVPlaybackCustomEventUserInfo : NSObject <TVPlaybackEventMarshaling>

@property (nonatomic) BOOL expectsReturnValue;
@property (readonly, nonatomic) id returnValue;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
